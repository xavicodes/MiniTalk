/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:47 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/10 13:10:46 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	a;
	char	*newstr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s + start)))
		len = (ft_strlen(s + start));
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = start;
	a = 0;
	while (s[i] && a < len && s[a + start] != '\0')
	{
		newstr[a] = s[i];
		i++;
		a++;
	}
	newstr[a] = '\0';
	return (newstr);
}
