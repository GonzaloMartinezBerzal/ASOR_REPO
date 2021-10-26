#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

int main(){
        time_t tiempo = time(NULL);
        struct tm *buf = localtime(&tiempo);
        printf("We are in %i ",buf->tm_year + 1900);

	char buff[100];
	strftime(buff,100,"%A, %H:%M \n", buf);
	printf("Today is %s", buff);
        return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio15.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio15 ejercicio15.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio15
We are in 2021 Today is Monday, 10:56
*/
