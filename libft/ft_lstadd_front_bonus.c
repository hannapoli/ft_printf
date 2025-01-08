/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:37:50 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/17 12:38:04 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst == NULL) || (new == NULL))
		return ;
	new->next = *lst;
	*lst = new;
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*lst;
	t_list	*temp;

	head = ft_lstnew("First Node");
	new_node1 = ft_lstnew("New Node 1");
	ft_lstadd_front(&head, new_node1);
	new_node2 = ft_lstnew("New Node 2");
	ft_lstadd_front(&head, new_node2);
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