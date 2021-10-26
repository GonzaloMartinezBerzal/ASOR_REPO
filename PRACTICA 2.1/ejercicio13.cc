#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

int main(){
	struct timeval tv, tv1;
	gettimeofday(&tv, NULL);
	int x = 0;
	for(int i = 0; i <1000000;i++){
		x += x;
	}

	gettimeofday(&tv1, NULL);

	printf("Time seconds spent: %li \n", tv1.tv_sec - tv.tv_sec);
	printf("Time microseconds spent: %li \n", tv1.tv_usec - tv.tv_usec);
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio13.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio13 ejercicio13.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio13
Time seconds spent: 0
Time microseconds spent: 4444
*/
