/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:33:04 by xlourenc          #+#    #+#             */
/*   Updated: 2024/04/22 14:22:18 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] < str2[i] || str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
		char str1[20] = "hello";
		char str2[20] = "iello";
		char str3[20] = "world";

		printf("%i\n",strncmp(str1,str2,5));
		printf("%i\n",strncmp(str3,str2,5));
		printf("%i\n",strncmp(str1,str3,5));
		printf("%i\n",strncmp(str3,str1,5));
}
*/