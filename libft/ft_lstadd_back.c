/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:23:26 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/05/10 13:07:35 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
/*
int	main(void)
{
t_list	*head = NULL;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*last;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node1->content = "Node 1";
	node2->content = "Node 2";
	node3->content = "Node 3";
	node4->content = "FINAL";
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstadd_back(&head, node4);
		last = ft_lstlast(head);
	printf("Last list: %s\n", (char *)last->content);
	free(node1);
	free(node2);
	free(node3);
}
*/