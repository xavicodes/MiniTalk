/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:34:25 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/05/10 13:07:23 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
// void del(void *content)
// {
//         free (content);
// }

// int main(void)
// {
//         // t_list *head = NULL;
//         // t_list *str = "abcd";
//         // t_list *str1 = "efgh";
//         t_list	*new = ft_lstnew(ft_strdup("abcd"));
//  	t_list	*new1 = ft_lstnew(ft_strdup("efgh"));
//         // t_list *new = ft_lstnew(str);
//         // t_list *new1 = ft_lstnew(str1);

//         new->next = new1;
//         new1->next = NULL;

//         printf("t_list *new's content is %s\n", (char *)new->content);
// 	printf("t_list *new1's content is %s\n", (char *)new1->content);
// 	ft_lstdelone(new, del);
//         printf("t_list *new's content is %s\n", (char *)new->content);
// 	printf("t_list *new1's content is %s\n", (char *)new1->content);

//         free(new);
//         free(new1);
// }