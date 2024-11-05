#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv, char **envp)
{
    char *pathname = "texts";
    int output = open(pathname, O_RDWR | O_CREAT);
    if (output > -1)
    {
        printf("path \"%s\" fd => %d", pathname, output);
    }
    else
    {
        printf("Something went wrong with \"%s\"", pathname);
    }
};