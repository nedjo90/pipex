#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv, char **envp)
{
    int fd = open("text", O_RDONLY);
    int close_fd = close(fd);
    if (close_fd == 0)
    {
        printf("Success");
    }
    else
    {
        printf("Error");
    }
    printf(" => %d", close_fd);
};