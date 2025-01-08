/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 00:05:30 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/14 03:20:29 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
void	ft_test(unsigned int i, char *c)
{
	if (i > 0)
		*c = 'a';
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
#include <stdio.h>

int	main(void)
{
	char s[] = "Hello, 42!";
    printf("%s\n", s);
    ft_striteri(s, ft_test);
    printf("%s\n", s);
    return (0);
}
 */