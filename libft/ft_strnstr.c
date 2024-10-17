/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:53:13 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/23 13:30:56 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	int		lit;
	int		l_len;

	b = 0;
	if (big == little)
	{
		return ((char *)big);
	}
	while (big[b] && len >= b)
	{
		lit = 0;
		l_len = ft_strlen(little);
		while (big[b + lit] != '\0' && little[lit] != '\0' && big[b
				+ lit] == little[lit] && b + lit < len)
		{
			lit++;
		}
		if (lit == l_len)
		{
			return ((char *)big + b);
		}
		b++;
	}
	return (0);
}

/* int	main(void)
{
	char big[] = "big";
	char little[] = "";

	printf("%s", ft_strnstr(big, little, 0));

} */