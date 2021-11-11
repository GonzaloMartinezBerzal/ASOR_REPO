#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char ** argv) {
	int fileDescript;

	if (argc != 2) {
		fprintf(stderr, "Usage: ./mydup <file>\n");
		return -1;
	}
	
	if ((fileDescript = open(argv[1], O_WRONLY | O_TRUNC | O_CREAT, 0644)) == -1) {
		perror("Error abriendo fichero");
		return -1;
	}

	if (dup2(fileDescript, 1) == -1)  {
		perror("Error ejecutando dup2");
		return -1;
	}
	
	printf("--------\n");
	close(fileDescript);
	return 0;
}