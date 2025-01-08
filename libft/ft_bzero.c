/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:24:41 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 20:00:31 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	str[50] = "This text is going to disappear!";

	ft_bzero(str, 7);
	printf("Reimplemented function:\n");
	printf("The new empty string is: %s\n", str);
	bzero (str, 7);

	printf("Original function:\n");
	printf("The new empty string is: %s\n", str);
	return (0);
}
*/