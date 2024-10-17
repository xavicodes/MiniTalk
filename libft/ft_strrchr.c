/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:15:42 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/13 12:43:42 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if ((unsigned char)c == 0 || (*str == '\0' && (unsigned char)c == 0))
		return ((char *)&str[i]);
	while (--i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
	}
	return (0);
}
/*
int	main(void)
{
	int	c;

		c = 'x';
		char str[30] ="hello mx frined x prank";
		printf("%s",ft_strrchr(str,c));
		return (0);
}*/
