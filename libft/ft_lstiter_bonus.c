/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:39:18 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/16 21:57:59 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if ((lst == NULL) || (f == NULL))
		return ;
	temp = lst;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/* 
#include <stdio.h>

static void	ft_print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*temp;

	node1 = ft_lstnew(ft_strdup("Node1"));
	node2 = ft_lstnew(ft_strdup("Node2"));
	node1->next = node2;
	ft_lstiter(node1, ft_print_content);
	while (node1 != NULL)
	{
		temp = node1->next;
		free(node1->content);
		free(node1);
		node1 = temp;
	}
	return (0);
}
 */