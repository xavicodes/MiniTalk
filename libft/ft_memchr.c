/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:43:27 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/10 13:24:15 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*uchar_str = (const unsigned char *)str;

	i = 0;
	while (i < n)
	{
		if (uchar_str[i] == (unsigned char)c)
		{
			return ((void *)(uchar_str + i));
		}
		i++;
	}
	return (0);
}
