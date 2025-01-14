/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:53:25 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/14 11:26:23 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_to_hex(unsigned long n, char *hex)
{
	int	count;

	count = 0;
	if (n > 15)
	{
		count = count + ft_to_hex(n / 16, hex);
		count = count + ft_to_hex(n % 16, hex);
	}
	else
		count = count + ft_put_char(hex[n]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_put_hex(unsigned int n, int case_xX)
{
	char	*hex;
	int		converted;

	if (case_xX == 'x')
		hex = "0123456789abcdef";
	if (case_xX == 'X')
		hex = "0123456789ABCDEF";
	converted = ft_to_hex(n, hex);
	return (converted);
}
/* 
int	main(void)
{
	ft_put_hex(437, 'x');
	ft_put_hex(437, 'X');
	return (0);
}
 */