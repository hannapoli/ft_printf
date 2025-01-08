/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:33:01 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:57 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*main_str;
	size_t	i;

	i = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	main_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (main_str == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		main_str[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		main_str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	main_str[i] = '\0';
	return (main_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Urduliz ";
	s2 = "42!";
	if (ft_strjoin(s1, s2) != NULL)
	{
		printf("%s\n", ft_strjoin(s1, s2));
		free(ft_strjoin(s1, s2));
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/