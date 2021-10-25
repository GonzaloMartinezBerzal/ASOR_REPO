#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/types.h>
#include <pwd.h>
 
int main(){
	printf("Real : %d \n",getuid());
	printf("Efectivo : %d \n",geteuid());
	
	struct passwd *p= getpwuid(getuid());
	printf("Username: %s \n", p->pw_name);
	printf("Home Directory: %s \n", p->pw_dir);
	printf("Info: %s \n", p->pw_gecos);
	return 1;
}
/*
wantonfrito@DESKTOP-T74V3K4:~$ nano ejercicio10.cc
wantonfrito@DESKTOP-T74V3K4:~$ gcc -o ejercicio10 ejercicio10.cc
wantonfrito@DESKTOP-T74V3K4:~$ ./ejercicio10
Real : 1000
Efectivo : 1000
Username: wantonfrito
Home Directory: /home/wantonfrito
Info: ,,,
*/
