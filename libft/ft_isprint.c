/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:02:21 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:22 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	c1 = '#';
	c2 = '	';
	printf("Reimplemented function:\n");
	printf("%d\n", ft_isprint(c1));
	printf("%d\n", ft_isprint(c2));

	printf("Original function:\n");
	printf("%d\n", isprint(c1));
	printf("%d\n", isprint(c2));
	return (0);
}
*/