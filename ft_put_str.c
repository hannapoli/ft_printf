/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:21:27 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/13 23:43:11 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_str(char const *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (write(2, "(null)", 6));
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
/* 
int	main(void)
{
	ft_put_str("Hello!");
	ft_put_char('\n');
	ft_put_str(NULL);
	return (0);
} */
