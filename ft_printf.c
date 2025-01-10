/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:14:24 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/10 22:54:16 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_type_check(char const type, va_list args)
{
	int	count;

	count = 0;
	if (type == '%')
		return (ft_put_char("%")); // '' or ""
	else if (type == 'c')
		count = count + (char)ft_put_char(va_arg(args, int));
	else if (type == 's')
		count = count + ft_put_str(va_arg(args, char *));
	else if (type == 'p')
		count = count + ft_put_ptr(va_arg(args, void *));
	else if ((type == 'd') || (type == 'i'))
		count = count + ft_put_di(va_arg(args, int));
	else if (type == 'u')
		count = count + ft_put_unsigned(va_arg(args, unsigned int));
	else if ((type == 'x') || (type == 'X'))
		count = count + ft_put_x(va_arg(args, int));
	return (count);
}

int ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count = count + ft_type_check(str[i], args);
		}
		else
			count = count + ft_put_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int main(void)
{
	ft_printf("Write a character %c\n", '!');
	ft_printf("Write a string %s\n", "Hello, there!");
	return (0);
}
