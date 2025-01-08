/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:14:03 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:10 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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

	c1 = '4';
	c2 = 'A';
	printf("Reimplemented function:\n");
	printf("%d\n", ft_isalpha(c1));
	printf("%d\n", ft_isalpha(c2));

	printf("Original function:\n");
	printf("%d\n", isalpha(c1));
	printf("%d\n", isalpha(c2));
	return (0);
}
*/