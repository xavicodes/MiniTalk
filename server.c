// Server side
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"


char *placechar(char result, char *final)
{
    int i;

    i = 0;
    final = malloc(sizeof(char) *ft_strlen(final)+2);
    if(!final)
        return(free(final),NULL);

    while(final[i] != '\0')
    i++;
    if(final[i] == '\0')
        final[i] = result;
    final[++i] = '\0';
    
    return(final);
}
int recusive_multi(int nbr, int power)
{
    int result;
    
    if(power == 0)
        return (1);
    if(power == -1)
        return (0);
    result = nbr *(recusive_multi(nbr,power - 1));
    return(result);
}
void signal_handler(int signum)
{
    int result;
    int count;
    char *final;
    count = 0;
    result = 0;
    final = ft_strdup("");

    //final[0] = '\0';
    if(signum == SIGUSR1)
    {
        result = result + 0;
    }
    else
    {
        result = result +(1 *recusive_multi(2 , 7 - count));
    }
    count++;
    if(count == 8)
    {
        final = placechar(result, final);
    }
    if(result == '\0')
        ft_printf("%s",final);

    count = 0;
    result = 0;
}





int main(void)
{

    ft_putstr_fd("  server pid :",1);
    ft_printf("  server pid :%d\n",getpid());

    signal(SIGUSR1,signal_handler);
    signal(SIGUSR2,signal_handler);
    sleep(500);

}
