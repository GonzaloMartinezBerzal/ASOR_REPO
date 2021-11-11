#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	struct stat * aux;
	
	if (argc != 2) {
		fprintf(stderr, "Usage: ./mylink <file>\n");
		return -1;
	}

	aux = malloc(sizeof(struct stat));
	
	if (stat(argv[1], aux) == -1) {
		perror("Error while executing stat");
		return -1;
	}

	if (S_ISREG(aux->st_mode)) {
		if (link(argv[1], "hard_link") == -1) {
			perror("Error ejecutando el link");
			free(aux);
			return -1;
		}
		if (symlink(argv[1], "sys_link") == -1) {
			perror("Error ejecutando el syslink");
			free(aux);
			return -1;
		}
	}

	free(aux);
	return 0;
}