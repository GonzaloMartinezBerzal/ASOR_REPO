#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>

int main(void) {
	char path[PATH_MAX];
	
    pid_t pid = getpid();
	pid_t sid = getsid(pid);
	pid_t pgid = getpgid(pid);

	printf("PID: %d\n", pid);
	printf("PPID: %d\n", getppid());
    printf("PGID: %d\n", pgid);
	printf("SID: %d\n", sid);
	
	printf("Numero maximo de archivos abiertos: %ld\n", sysconf(_SC_OPEN_MAX));

	if ( getcwd(path, PATH_MAX) == NULL) {
		perror("Error ejecutando getcwd");
		return -1;
	}

	printf("Directorio actual: %s\n", path);
    return 0;
}