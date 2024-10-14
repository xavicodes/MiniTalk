// Server side

#include <sys/types.h>

#include <unistd.h>

#include <signal.h>
#include <stdio.h>


int main(void)
{
    ft_putstr("  server pid :");
    ft_putstr("%d\n",get_pid());


}
