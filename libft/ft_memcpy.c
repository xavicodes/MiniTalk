/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:50 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/15 16:01:07 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "hello!";
	char	src[] = "0123456789";
	char	dest1[] = "hello!";
	char	src2[] = "0123456789";

	printf("My memcpy function = %s\n",(char *)ft_memcpy(dest,src,7));
	memcpy(dest1,src2,7);
	printf(" original memcpy function = %s",dest);
}
*/