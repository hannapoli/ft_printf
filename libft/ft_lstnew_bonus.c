/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:47:03 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/15 22:14:23 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* 
#include <stdio.h>

int	main(void)
{
	int		value;
	char	*str;
	t_list	*node1;
	t_list	*node2;

	value = 42;
	node1 = ft_lstnew(&value);
	str = "My 1st list manipulation.";
	if (node1 != NULL)
		printf("Node 1 content: %d\n", *(int *)(node1->content));
	else
		printf("Node 1 creation failed.\n");
	node2 = ft_lstnew(str);
	if (node2 != NULL)
		printf("Node 2 content: %s\n", (char *)(node2->content));
	else
		printf("Node 2 creation failed.\n");
	free(node1);
	free(node2);
	return (0);
}
 */