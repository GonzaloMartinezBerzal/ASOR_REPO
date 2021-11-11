#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(void){
    int fileDescript = open("patata",O_TRUNC | O_CREAT,0645); //RW-R--R-X
    if(fileDescript == -1){
        perror("ERROR");
        return -1;
    }
    return 0;
}
