/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:11:56 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/14 23:20:58 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_len(int n)
{
	int		count_len;

	count_len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * (-1);
		count_len++;
	}
	while (n != 0)
	{
		n = n / 10;
		count_len++;
	}
	return (count_len);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	number;
	char		*str;

	number = n;
	len = ft_number_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number != 0)
	{
		str[len--] = (number % 10) + '0';
		number = number / 10;
	}
	return (str);
}
/* 
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*dest;

	n = -42244224;
	dest = ft_itoa(n);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
  */