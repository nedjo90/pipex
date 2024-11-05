#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv, char **envp){
    int fd = open("text", O_RDONLY);
    int read_size = 100;
    char buf[read_size];
    ssize_t nbytes;
    if(fd >= 0){
        nbytes = read(fd, buf, read_size);
        buf[nbytes > read_size ? read_size : nbytes] = '\0';
        printf("read %ld bytes in \"%s\"", nbytes, buf);
    }else{
        printf("Something went wrong when open the file");
    }
};