/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:09 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/10 13:17:43 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0' && str[i] != (unsigned char)c)
	{
		i++;
	}
	if (str[i] == (unsigned char)c)
	{
		return ((char *)(str + i));
	}
	return (NULL);
}

/*
int	main(void)
{
	int	c;
		const char str[20] = "Hello ma friend";

		c = 'a';
		printf("%s",(char *) strchr(str,c));
}
*/
