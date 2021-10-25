#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

int main(){
	time_t tiempo = time(NULL);
	printf("Since EPOCH: %li \n", tiempo);
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio12.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio12 ejercicio12.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio12
Since EPOCH: 1635151317
*/
