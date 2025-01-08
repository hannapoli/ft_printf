/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:42:35 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 23:29:36 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trim_len;
	char	*trimmed;

	start = 0;
	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while ((end > start) && (ft_strchr(set, s1[end - 1])))
		end--;
	trim_len = end - start;
	trimmed = (char *)malloc(trim_len + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_memcpy(trimmed, (s1 + start), trim_len);
	trimmed[trim_len] = '\0';
	return (trimmed);
}
/* 
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	char	*new_string;

	s1 = "13542135";
	set = "135";
	new_string = ft_strtrim(s1, set);
	if (new_string)
	{
		printf("%s\n", new_string);
		free(new_string);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/