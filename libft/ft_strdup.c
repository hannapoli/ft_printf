/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:22:41 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:54 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	while (s1[length] != '\0')
		length++;
	dest = (char *)malloc(length + 1);
	if (dest == NULL)
		return (NULL);
	while (i < length)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s1;
	char		*dest;
	char		*dest2;

	s1 = "42 Born2Code";
	printf("Reimplemented function:\n");
	dest = ft_strdup(s1);
	if (dest != NULL)
	{
		printf("%s\n", dest);
		free(dest);
	}
	else
		printf("Memory allocation failed.\n");

	printf("Original function:\n");
	dest2 = strdup(s1);
	if (dest2 != NULL)
	{
		printf("%s\n", dest2);
		free(dest2);
	}
	else
		printf ("Memory allocation failed.\n");
	return (0);
}
*/