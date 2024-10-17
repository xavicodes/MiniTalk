/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:17:29 by xlourenc          #+#    #+#             */
/*   Updated: 2024/05/15 15:59:35 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	toggle;

	i = 0;
	toggle = 0;
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (*str != c && toggle == 0)
		{
			toggle = 1;
			i++;
		}
		else if (*str == c)
			toggle = 0;
		str++;
	}
	return (i);
}

void	safe(char **split, int nbr)
{
	if (!*split || !split)
		while (split[nbr] > 0)
			free(split[nbr--]);
	free(*split);
	return ;
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (free(split), NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			if (!split)
				return (safe(split, j), NULL);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}

/* int	main(void)
{
	char **split = ft_split("Hello world", ' ');
	int i = 0;
	while(split[i])
	{
		printf("str: %s\n", split[i]);
		free(split[i]);
		i++;
	}
} */

/*  int main()
{
	char *str = NULL;
	char **split = ft_split(str, ' ');
	int i = 0;

	if(split == NULL)
	{
		printf("split failed");
		return (1);
	}
	while(split[i])
	{
	printf("split: %s\n", split[i]);
	i++;
	}
}  */
