/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:44:31 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/16 23:00:01 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if ((lst == NULL) || (del == NULL))
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/* 
static void	ft_del_content(void *content)
{
	free(content);
}
 */
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node2;
	char	*content1;
	char	*content2;
	t_list	*temp;

	content1 = (char *)malloc(15 * sizeof(char));
	content2 = (char *)malloc(15 * sizeof(char));
	if ((content1 == NULL) || (content2 == NULL))
		return (1);
	sprintf(content1, "Node1");
	sprintf(content2, "Node2");
	head = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	head->next = node2;
	temp = head;
	printf("Before cleaning:\n");
	while (temp != NULL)
	{
		printf("%s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL\n");
	ft_lstclear(&head, ft_del_content);
	if (head == NULL)
		printf("After:\nThe list is cleared.\n");
	return (0);
}
 */