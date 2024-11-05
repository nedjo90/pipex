#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv, char **envp)
{
    int fd = open("text", O_RDONLY);
    int read_size = 100;
    ssize_t written;
    char buf[read_size];
    ssize_t nbytes;
    if (fd >= 0)
    {
        nbytes = read(fd, buf, read_size);
        written = write(1, buf, nbytes);
        printf(" => %lu written", written);
    }
    else
    {
        printf("Something went wrong when open the file");
    }
};