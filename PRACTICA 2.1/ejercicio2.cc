#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(){
	if(setuid(0) == -1) printf("Codigo 2 Error %d : %s\n", errno, strerror(errno));
	return 1;
}
