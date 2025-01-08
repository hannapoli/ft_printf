/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:32:32 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/16 20:21:25 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((lst == NULL) || (del == NULL))
		return ;
	del(lst->content);
	free(lst);
}
/* 
static void	ft_del(void *content)
{
	free(content);
}

#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	char	*content1;
	char	*content2;

	content1 = (char *)malloc(10 * sizeof(char));
	content2 = (char *)malloc(10 * sizeof(char));
	if ((content1 == NULL) || (content2 == NULL))
		return (1);
	sprintf(content1, "Node1");
	sprintf(content2, "I am Node2");
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node1->next = node2;
	ft_lstdelone(node1, ft_del);
	if (node2 != NULL)
		printf("The content of the Node2: %s\n", (char *)node2->content);
	ft_lstdelone(node2, ft_del);
	return (0);
}
 */