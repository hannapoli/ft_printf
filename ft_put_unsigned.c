/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:41:40 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/14 11:26:39 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count = count + ft_put_di(n / 10);
		count = count + ft_put_di(n % 10);
	}
	else if ((n >= 0) && (n < 10))
		count = count + ft_put_char(n + 48);
	if (count < 0)
		return (-1);
	return (count);
}
/* 
#include <limits.h>

int	main(void)
{
	ft_put_unsigned(UINT_MAX);
	return (0);
} */
