/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:12:36 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/05/10 13:27:48 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void f(void *content)
// {
//         printf("itersting true nodes\n");
// }

// int main()
// {
//         char str[] = "abcd";
//         char str1[] = "efgh";

//         t_list *new = ft_lstnew(str);
//         t_list *new1 = ft_lstnew(str1);
//         printf("%s\n",(char *)new->content);
//                 ft_lstiter(new, f);
//         printf("%s\n",(char *)new1->content);
//                 ft_lstiter(new1, f);

//         free (new);
//         free(new1);
// }