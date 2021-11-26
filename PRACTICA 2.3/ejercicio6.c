#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>

int main(void) {
	pid_t pid = fork();
	switch(pid) {
		case -1:
			perror("Error ejecutando fork");
			return -1;
		case 0:
			break;
		default:
			if (setsid() == -1) {
				perror("Error ejecutando setsid");
				return -1;
			}

			chdir("/tmp");
			char path[PATH_MAX];
			pid_t pid = getpid();
            pid_t sid = getsid(pid);
			pid_t pgid = getpgid(pid);
			
			printf("PID: %d\n", pid);
			printf("PPID: %d\n", getppid());
			printf("PGID: %d\n", pgid);
            printf("SID: %d\n", sid);
			if ( getcwd(path, PATH_MAX) == NULL) {
				perror("Error ejecutando getcwd");
				return -1;
			}
			printf("Directorio actual: %s\n", path);
			break;
	}
	return 0;
}