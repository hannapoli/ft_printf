/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:02:17 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/14 03:15:44 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_trial(unsigned int i, char c)
{
	return (c + i);
}
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*dest;

	s = "aaaaa!";
	dest = ft_strmapi(s, ft_trial);
	if (dest != NULL)
	{
		printf("%s\n", dest);
		free(dest);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/