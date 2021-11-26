#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char ** argv) {
	if (argc < 2) {
		fprintf(stderr, "Uso: ./myexecvp <command>\n");
		return -1;
	}
	
	if (execvp(argv[1], argv + 1) == -1) {
		perror("Error ejecutando execvp");
		return -1;
	}
	printf("El comando termino de ejecutarse\n");
	return 0;
}