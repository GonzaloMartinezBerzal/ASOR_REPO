#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(){
	if(setuid(0) == -1) perror("Error setuid 2");
	return 1;
}
