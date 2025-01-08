/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:13:18 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 22:53:21 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	character;

	i = 0;
	character = c;
	while (s[i] != '\0')
	{
		if (s[i] == character)
			return ((char *)(s + i));
		i++;
	}
	if (character == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str = "Born2Code";
	char		c;
	char		*find_1st_c_1;
	char		*find_1st_c_2;

	c = 'o';
	printf("Reimplemented function:\n");
	find_1st_c_1 = ft_strchr (str, c);
	if (find_1st_c_1 != NULL)
		printf("'%c' is at the position %ld. \n", c, find_1st_c_1 - str);
	else
		printf("There is no '%c' character in this string.\n", c);

	printf("Original function:\n");
	find_1st_c_2 = strchr (str, c);
	if (find_1st_c_2 != NULL)
		printf("'%c' is at the position %ld. \n", c, find_1st_c_2 - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	return (0);
}
 */