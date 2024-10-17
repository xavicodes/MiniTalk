/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:05:46 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/10 15:26:27 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(long int n)
{
	size_t		i;
	long int	longnbr;

	longnbr = n;
	i = 0;
	if (longnbr < 0)
	{
		longnbr *= -1;
	}
	if (longnbr == 0)
		return (1);
	while (longnbr > 0)
	{
		longnbr = longnbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	long	numb;
	size_t	digits;
	int		negative;

	digits = get_digits(n);
	numb = (long)n;
	negative = 0;
	if (numb < 0)
	{
		negative = 1;
		numb = -numb;
	}
	strnum = malloc(sizeof(char) * (digits + 1 + negative));
	if (!strnum)
		return (NULL);
	strnum[digits + negative] = '\0';
	while (digits--)
	{
		strnum[digits + negative] = numb % 10 + '0';
		numb /= 10;
	}
	if (negative)
		strnum[0] = '-';
	return (strnum);
}
