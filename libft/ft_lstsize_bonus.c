/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:04:01 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/16 11:08:29 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*head;

	count = 0;
	head = lst;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*temp;

	head = ft_lstnew("Node1");
	new_node1 = ft_lstnew("Node2");
	ft_lstadd_front(&head, new_node1);
	new_node2 = ft_lstnew("Node3");
	ft_lstadd_front(&head, new_node2);
	printf("The size of this list: %d\n", ft_lstsize(head));
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	return (0);
}
*/