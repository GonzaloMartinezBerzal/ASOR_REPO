#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


int main(int argc, char ** argv) {
	int fd;
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <string>\n", argv[0]);
		return -1;
	}
	if ((fd = open("tuberia", O_WRONLY)) == -1) {
		perror("Error abriendo pipe");
		fprintf(stderr, "Comprueba que una pipe se llame tuberia en el directorio\n");
		return -1;
	}
	if (write(fd, argv[1], strlen(argv[1]) + 1) == -1) {
		perror("Error escribiendo a pipe");
		return -1;
	}
	return 0;
}