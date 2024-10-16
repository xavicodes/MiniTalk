// Server side

#include <sys/types.h>
#include "libft/libft.h"
#include "libft/ft_printf/ft_printf.h"
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <strings.h>

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
void	signal_handler(int signum)
{
	static int	counter = 0;
	static int	result = 0;
	static int	len = 0;
	static char	*final;

	if (!final)
		final = ft_strdup("");
	if (signum == SIGUSR1)
		result = result + 0;
	else if (signum == SIGUSR2)
		result = result + (1 * ft_recursive_multi(2, 7 - counter));
	counter++;
	if (counter == 8)
	{
		final = placechar(final, result);
		if (result == '\0')
		{
			ft_printf("%s\n", final);
			final = NULL;
		}
		counter = 0;
		result = 0;
		len += 1;
	}
}
int main(void)
{

    ft_putstr_fd("  server pid :",1);
    ft_printf("  server pid :%d\n",getpid());

    signal(SIGUSR1,signal_handler);
    signal(SIGUSR2,signal_handler);
    sleep(500);

}

