#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include "libft/libft.h"

void convert(char s, int pid)
{
    int bit;

    bit = 0;
    while(bit< 8)
    {
        if(s & 1 << bit)
            kill(pid,SIGUSR1);
        else
            kill(pid,SIGUSR2);
        bit++;
    }
    usleep(500); //timeout between signals so it doesnt flood.
}

int main(int argc, char **argv)
{
    pid_t pid;
    int i = 0;
    if(argc != 3 ||( argc == 2 && !argv[2][0]))
        return(1);
    pid = atoi(argv[1]);
    while(argv[2][i])
    {
    convert(argv[2][i],pid);
    i++;
    }

}

