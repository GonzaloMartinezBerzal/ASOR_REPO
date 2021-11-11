#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/sysmacros.h>
#include <errno.h>

int main(int argc, char ** argv) {
	struct stat * aux;

	if (argc != 2) {
		fprintf(stderr, "Usage: ./mystat <file>\n");
		return 0;
	}
	
        aux = malloc(sizeof(struct stat));

	if ( stat(argv[1], info) == -1 ) {
		perror("Error");
		free(info);
		return -1;
	}

	printf("Numero mayor: %d\n", major(aux->st_dev));
	printf("Numero menor: %d\n", minor(aux->st_dev));
	printf("Numero de inodo: %ld\n", aux->st_ino);
	printf("Tipo de archivo y modo: %d\n", aux->st_mode);
	printf("Tiempo desde ultimo acceso: %s", ctime(&aux->st_atime));

	free(aux);
	return 0;
}