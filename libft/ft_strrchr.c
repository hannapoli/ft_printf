/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:05:38 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/14 03:10:06 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int		i;
	char	character;

	character = (char)c;
	i = ft_strlen(s);
	if (character == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == character)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str = "Born2Code";
	char		c;
	char		*find_last1;
	char		*find_last2;

	c = 'o';
	printf("Reimplemented function:\n");
	find_last1 = ft_strrchr (str, c);
	if (find_last1 != NULL)
		printf("The last position of '%c' is %ld. \n", c, find_last1 - str);
	else
		printf("There is no '%c' character in this string.\n", c);

	printf("Original function:\n");
	find_last2 = strrchr (str, c);
	if (find_last2 != NULL)
		printf("The last position of '%c' is %ld. \n", c, find_last2 - str);
	else
		printf("There is no '%c' character in this string.\n", c);
	return (0);
}
 */