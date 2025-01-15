/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:40:24 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/15 00:57:27 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_di(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		count = count + ft_put_char('-');
		count = count + ft_put_di(-n);
	}
	else if (n > 9)
	{
		count = count + ft_put_di(n / 10);
		count = count + ft_put_di(n % 10);
	}
	else
		count = count + ft_put_char(n + 48);
	if (count < 0)
		return (-1);
	return (count);
}
/* 
int	main(void)
{
	ft_put_di(2147483647);
	return (0);
} */
