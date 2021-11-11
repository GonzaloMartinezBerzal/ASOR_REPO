#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(void){
    umask(0027); //Cambias la mascara
    
    int fileDescript = open("patata",O_TRUNC | O_CREAT,0645); //RW-R--R-X
    if(fileDescript == -1){
        perror("ERROR");
        return -1;
    }

    umask(previousMask); // Devuelves a la mascara original
    return 0;
}
