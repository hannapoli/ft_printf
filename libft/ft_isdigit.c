/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:08:36 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:17 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	c1 = 'a';
	c2 = '2';
	printf("Reimplemented function:\n");
	printf("%d\n", ft_isdigit(c1));
	printf("%d\n", ft_isdigit(c2));

	printf("Original function:\n");
	printf("%d\n", isdigit(c1));
	printf("%d\n", isdigit(c2));
	return (0);
}
*/