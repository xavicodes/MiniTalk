/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 15:11:21 by xlourenc          #+#    #+#             */
/*   Updated: 2024-10-17 15:11:21 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include "/home/xlourenc/Desktop/42/Projects/minitalk/libft/libft.h"
// #include "ft_printf/ft_printf.h"

void ft_handler(int signal)
{
static int	bit;
static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		printf("%c", i);
		bit = 0;
		i = 0;
	}
}
int main(int argc, char **argv)
{
	int pid;

	(void)argv;
	if (argc != 1)
		return (0);

	pid = getpid();
	printf("pid is -->%d\n", pid);
	printf("chat box |\n");
	while (argc == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}
