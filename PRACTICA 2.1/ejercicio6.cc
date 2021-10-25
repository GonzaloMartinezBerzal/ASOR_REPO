#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>

int main(){
	printf("Maximum Length Arguments: %li \n", sysconf(_SC_ARG_MAX));
	printf("Maximum Children: %li \n", sysconf(_SC_CHILD_MAX));
	printf("Maximum Files: %li \n", sysconf(_SC_OPEN_MAX));
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio6.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio6 ejercicio6.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio6
Maximum Length Arguments: 2097152
Maximum Children: 24914
Maximum Files: 1024
*/
