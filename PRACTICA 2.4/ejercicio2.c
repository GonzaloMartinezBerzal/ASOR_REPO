#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char ** argv) {
	int ph[2];
	int hp[2];
	int fin = 0, n_mensajes = 0;
	char buffer[256];

    if (pipe(hp)) {
		perror("Error creando pipe");
		return -1;
	}

	if (pipe(ph)) {
		perror("Error creando pipe");
		return -1;
	}
	
	pid_t pid = fork();
	switch(pid) {
		case -1:
			perror("Error ejecutando fork");
			return -1;
		case 0:
			close(ph[1]);
			close(hp[0]);
			while (!fin) {
				int n = read(ph[0], buffer, 256);
				buffer[n] = '\0';
				printf("%s\n", buffer);
				sleep(1);
				if (++n_mensajes == 10) {
					write(hp[1], "q", 1);
					fin = 1;
				}
				else {
					write(hp[1], "l", 1);
				}
			}
			close(ph[0]);
			close(hp[1]);
			break;
		default:
			close(ph[0]);
			close(hp[1]);
			while(!fin) {
				scanf("%s", buffer);
				write(ph[1], buffer, strlen(buffer) + 1);
				read(hp[0], buffer, 1);
				if (buffer[0] == 'q') {
					fin = 1;
				}
			}
			close(ph[1]);
			close(hp[0]);
			break;
	}
	return 0;
}