/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:30 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 23:35:26 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/* 
#include <stdio.h>

int	main(void)
{
	char const	*s;
	char		*extracted_substr;

	s = "Hello, 42!";
	extracted_substr = ft_substr(s, 7, 4);
	if (extracted_substr != NULL)
	{
		printf("Substring: %s\n", extracted_substr);
		free(extracted_substr);
	}
	else
		printf("Error: Substring creation failed.\n");
	return (0);
}
 */