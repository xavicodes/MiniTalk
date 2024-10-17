/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 15:11:09 by xlourenc          #+#    #+#             */
/*   Updated: 2024-10-17 15:11:09 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include "libft/libft.h"
// #include "ft_printf/ft_printf.h"
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
