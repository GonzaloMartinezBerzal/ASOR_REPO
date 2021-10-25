#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>

int main(){
	printf("Maximum Number Links: %li \n", pathconf("/tmp",_PC_LINK_MAX));
	printf("Maximum Size Of Path: %li \n", pathconf("/tmp",_PC_PATH_MAX));
	printf("Maximum Size Of Filename: %li \n", pathconf("/tmp",_PC_NAME_MAX));
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio7.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio7 ejercicio7.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio7
Maximum Number Links: 65000
Maximum Size Of Path: 4096
Maximum Size Of Filename: 255
*/
