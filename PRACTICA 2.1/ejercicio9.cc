#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>

int main(){
	printf("Real: %d \n", getuid());
	printf("Efectivo: %d \n", geteuid());
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio9.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio9 ejercicio9.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio9
Real: 1000
Efectivo: 1000
*/
