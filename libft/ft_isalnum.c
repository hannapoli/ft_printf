/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:21:36 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:07 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c1;
	int	c2;

	c1 = '.';
	c2 = '2';
	printf("Reimplemented function:\n");
	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));

	printf("Original function:\n");
	printf("%d\n", isalnum(c1));
	printf("%d\n", isalnum(c2));
	return (0);
}
*/