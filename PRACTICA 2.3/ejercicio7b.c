#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char ** argv) {
	int tam = sysconf(_SC_ARG_MAX);
	char command[tam];
	
	if (argc < 2) {
		fprintf(stderr, "Uso: ./mysystem <command>\n");
		return -1;
	}

	for (int i = 1; i < argc; i++) {
		strncat(command, argv[i], tam);
		strncat(command, " ", 2);
	}

	if (system(command) == -1) {
		perror("Error ejecutando system\n");
		return -1;
	}
	printf("El comando termino de ejecutarse\n");
	return 0;
}