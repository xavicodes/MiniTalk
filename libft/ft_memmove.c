/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:39:47 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/15 16:00:50 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (str1 > str2)
	{
		while (n-- > 0)
			((char *)str1)[n] = ((char *)str2)[n];
	}
	else
	{
		while (i < n)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
/*
int	main(void)
{
		char str1[] = "012345";
		char str2[] = "hello";
		char str11[] = "012345";
		char str22[] = "hello";

		memmove(str11,str22,6);
		printf("%s\n",(char *)ft_memmove(str1,str2,6));
		printf("%s", str11);
}
*/