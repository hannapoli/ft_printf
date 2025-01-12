/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:40:24 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/12 20:29:10 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_di(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		count = 11;
	}
	else if (n < 0)
	{
		count = count + ft_put_char('-');
		count = ft_put_di(-n);
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
	ft_put_di(42);
	return (0);
}
 */