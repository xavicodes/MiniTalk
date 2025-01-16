/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:11:09 by xlourenc          #+#    #+#             */
/*   Updated: 2025/01/16 17:50:02 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int parcing(char **argv)
{
	int i;

	i = 0;
	while(argv[1][i])
	{
		if(!(argv[1][i] >= '0' && argv[1][i] <= '9'))
			{
				write(1,"wrong pid",9);
				return (1);
			}
		if(argv[1][i] >= '0' && argv[1][i] <= '9')	
		i++;
	}
	if(argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		write(1,"ERROR,wrong pid or text",23);
		return(1);
	}
	return(0);
}
void convert(int pid, char s)
{
	int bit;

	bit = 0;
	while (bit < 8)
	{
		if ((s & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int main(int argc, char **argv)
{
	int pid;
	int i;
	if(parcing(argv))
		return(1);
	i = 0;
	if (argc == 3)
	{	
		
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			convert(pid, argv[2][i]);
			i++;
		}
		convert(pid, '\n');
	}
	else
	{
		printf("ERROR");
		return (1);
	}
	return (0);
}
