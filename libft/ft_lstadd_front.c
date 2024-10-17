/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:09:45 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/05/10 13:07:31 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

// int main(void)
// {
//         t_list *head = NULL;

//         t_list *node1 = malloc(sizeof(t_list));
//         t_list *node2 = malloc(sizeof(t_list));
//         t_list *node3 = malloc(sizeof(t_list));
//         t_list *node4 = malloc(sizeof(t_list));
//         node1->content = "node1";
//         node2->content = "node2";
//         node3->content = "node3";
//         node4->content = "node4start";

//         head = node1;
//         node1->next = node2;
//         node2->next = node3;
//         node3->next = NULL;

//         ft_lstadd_front(&node1,node4);
//         //head = node4;
//         head = node4;

//         printf("%s",(char *)head->content);

//         free(node1);
//         free(node2);
//         free(node3);
//         free(node4);

// }
