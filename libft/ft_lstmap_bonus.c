/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:59:37 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/17 14:27:19 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	add_node(
	t_list **new_list,
	t_list *lst,
	void *(f)(void *),
	void (*del)(void *))
{
	t_list	*new_node;
	void	*new_content;

	new_content = f(lst->content);
	if (!new_content)
		return (0);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (0);
	}
	ft_lstadd_back(new_list, new_node);
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if ((!lst) || (!f) || (!del))
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (!add_node(&new_list, lst, f, del))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
/* 
#include <stdio.h>

static	void	*ft_str_toupper(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = ft_strdup(str);
	i = 0;
	if (new_str == NULL)
		return (NULL);
	while (new_str[i])
	{
		if ((new_str[i] >= 'a') && (new_str[i] <= 'z'))
			new_str[i] = new_str[i] - 32;
		i++;
	}
	return (new_str);
}

static void	ft_del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;
	t_list	*temp;

	head = ft_lstnew(ft_strdup("node1"));
	node2 = ft_lstnew(ft_strdup("node2"));
	node3 = ft_lstnew(ft_strdup("node3"));
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	new_list = ft_lstmap(head, ft_str_toupper, ft_del_content);
	temp = head;
	while (temp != NULL)
	{
		printf(" %s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL\n");
	temp = new_list;
	while (temp != NULL)
	{
		printf(" %s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL\n");
	ft_lstclear(&head, ft_del_content);
	ft_lstclear(&new_list, ft_del_content);
	return (0);
}
 */