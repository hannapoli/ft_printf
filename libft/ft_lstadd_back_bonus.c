/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:53:36 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/16 13:30:47 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if ((lst == NULL) || (new == NULL))
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new_node;
	t_list	*last_node;
	t_list	*lst;
	t_list	*temp;

	head = ft_lstnew("Node1");
	new_node = ft_lstnew("Node2");
	last_node = ft_lstnew("Last Node");
	ft_lstadd_back(&head, new_node);
	ft_lstadd_back(&head, last_node);
	lst = head;
	while (lst != NULL)
	{
		printf("%s -> ", (char *)(lst->content));
		lst = lst->next;
	}
	printf("NULL\n");
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	return (0);
}
 */