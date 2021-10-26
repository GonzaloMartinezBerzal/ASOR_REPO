#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

int main(){
	time_t tiempo = time(NULL);
	struct tm *buf = localtime(&tiempo);
	printf("We are in %i \n",buf->tm_year + 1900);
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio14.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio14 ejercicio14.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio14
We are in 2021
*/
