/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:25:09 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/10 13:46:48 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*dup;

	size = ft_strlen(s) + 1;
	dup = malloc(size * sizeof(char));
	if (dup == 0)
		return (NULL);
	ft_strlcpy(dup, s, size);
	return (dup);
}
