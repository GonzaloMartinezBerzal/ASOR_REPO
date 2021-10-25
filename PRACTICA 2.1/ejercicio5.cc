#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>

int main(){
	struct utsname buf;
	if(uname (&buf) == -1){
		printf ("Error %d : %s \n", errno,strerror(errno));
		return -1;
	}
	printf("System name: %s \n", buf.sysname);
	printf("Node name: %s \n",buf.nodename);
	printf("Release: %s \n", buf.release);
	printf("Version: %s \n", buf.version);
	printf("Machine: %s \n", buf.machine);
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio5.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio5 ejercicio5.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio5
System name: Linux
Node name: DESKTOP-T74V3K4
Release: 4.19.128-microsoft-standard
Version: #1 SMP Tue Jun 23 12:58:10 UTC 2020
Machine: x86_64
*/
