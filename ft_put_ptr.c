/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:39:44 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/13 20:26:08 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_ptr(void *ptr)
{
	unsigned long	num_ptr;
	char			*hex_low;
	int				count;

	count = 0;
	hex_low = "0123456789abcdef";
	num_ptr = (unsigned long)ptr;
	count = count + ft_put_str("0x");
	count = count + ft_to_hex(num_ptr, hex_low);
	return (count);
}
/* 
int	main(void)
{
	ft_put_ptr((void *)0x7ffee3d6b9f8);
	ft_put_char('\n');
	ft_put_ptr((void *)0x7FFEE3D6B9F8);
	ft_put_char('\n');
	ft_put_ptr(NULL);
	return (0);
} */
