/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:13:27 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/14 23:21:21 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str;

	str = " +42";
	printf("Reimplemented function:\n");
	printf("The converted integer is: %d\n", ft_atoi(str));
	printf("Original function:\n");
	printf("The converted integer is: %d\n", atoi(str));
	return (0);
}
*/