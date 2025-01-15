/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:14:24 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/15 00:59:17 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_check(char const type, va_list args)
{
	int	count;

	count = 0;
	if (type == '%')
		return (ft_put_char('%'));
	else if (type == 'c')
		count = count + ft_put_char(va_arg(args, int));
	else if (type == 's')
		count = count + ft_put_str(va_arg(args, char const *));
	else if (type == 'p')
		count = count + ft_put_ptr(va_arg(args, void *));
	else if ((type == 'd') || (type == 'i'))
		count = count + ft_put_di(va_arg(args, int));
	else if (type == 'u')
		count = count + ft_put_unsigned(va_arg(args, unsigned int));
	else if ((type == 'x') || (type == 'X'))
		count = count + ft_put_hex(va_arg(args, unsigned int), type);
	else
		return (-1);
	return (count);
}

int	ft_err_check(int t_check, va_list args)
{
	if (t_check == -1)
	{
		write(2, "Error: unsupported format specifier\n", 36);
		va_end(args);
		return (-1);
	}
	return (t_check);
}

int	ft_printf(char const *str, ...)
{
	int			i;
	int			count;
	va_list		args;
	int			t_check;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			t_check = ft_type_check(str[i], args);
			t_check = ft_err_check (t_check, args);
			if (t_check == -1)
				return (-1);
			count = count + t_check;
		}
		else
			count = count + ft_put_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/* 
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("Write a character %c\n", '!');
	ft_printf("Write a string %s\n", "Hello, there!");
	ft_printf("Write a string %s\n", (char *) NULL);
	ft_printf("Write a pointer %p\n", (void *)42);
	ft_printf("Write a pointer %p\n", NULL);
	ft_printf("Write a number %d, %i\n", 2147483647, 2147483647);
	ft_printf("Write an unsigned number %u\n", UINT_MAX);
	ft_printf("Write a hex number %x, %X\n", 456597567, 456597567);
	ft_printf("Write a percent sign %%\n");

	ft_printf("\nComparison to the results of the original printf():\n");
	printf("Write a character %c\n", '!');
	printf("Write a string %s\n", "Hello, there!");
	printf("Write a string %s\n", (char *) NULL);
	printf("Write a pointer %p\n", (void *)42);
	printf("Write a pointer %p\n", NULL);
	printf("Write a number %d, %i\n", 2147483647, 2147483647);
	printf("Write an unsigned number %u\n", UINT_MAX);
	printf("Write a hex number %x, %X\n", 456597567, 456597567);
	printf("Write a percent sign %%\n");

	ft_printf("\nError check:\n");
	ft_printf("Get an error msg: %q\n");

	return (0);
} */
