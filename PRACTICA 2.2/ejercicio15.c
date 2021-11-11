#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <linux/limits.h>
#include <errno.h>

int main(int argc, char ** argv) {
    int bytes;
	DIR * dir;
	struct dirent * entrada;
	int tam = 0;
	char path[PATH_MAX];
	if (argc != 2) {
		fprintf(stderr, "Usage: ./myls <dirory>\n");
		return -1;
	}
	dir = opendir(argv[1]);
	if (dir == NULL) {
		perror("Error abriendo dir");
		return -1;
	}

	while ((entrada = readdir(dir)) != NULL) {
		printf("%s", entrada->d_name);
        
		if (entrada->d_type == DT_LNK) {
			if ((bytes = readlink(entrada->d_name, path, PATH_MAX)) == -1) {
				perror("Error leyendo symlink");
				return -1;
			}
			path[bytes] = '\0';
			printf("->%s\n", path);
            }
            if (entrada->d_type == DT_REG) {
                printf("\n");
                tam += entrada->d_reclen;
            }
            if (entrada->d_type == DT_DIR) {
                printf("/\n");
            }	
        }
	}
	printf("Tamanno total: %d kbytes\n", tam);
	closedir(dir);
	return 0;
}