/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:09:56 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/16 12:39:05 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (NULL);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*last_node;
	t_list	*temp;

	head = ft_lstnew("Node1 (first becomes last)");
	new_node1 = ft_lstnew("Node2");
	ft_lstadd_front(&head, new_node1);
	last_node = ft_lstlast(head);
	if (last_node != NULL)
		printf("Content of the last node: %s\n", (char *)(last_node->content));
	else
		printf("Empty list.\n");
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	return (0);
}
 */