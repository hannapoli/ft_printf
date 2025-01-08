/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:34:55 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:46:47 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c1;
	int	c2;

	c1 = 'Z';
	c2 = 'u';
	printf("Reimplemented function:\n");
	printf("%d\n", ft_toupper(c1));
	printf("%d\n", ft_toupper(c2));

	printf("Original function:\n");
	printf("%d\n", toupper(c1));
	printf("%d\n", toupper(c2));
}
*/