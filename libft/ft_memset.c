/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:38:06 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 20:18:45 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[50] = "Urduliz 42";
	char	*dest1;
	char	*dest2;

	printf("Reimplemented function:\n");
	dest1 = ft_memset(str, 'A', 7);
	printf("The new string is: %s\n", dest1);

	printf("Original function:\n");
	dest2 = memset (str, 'A', 7);
	printf("The new string is: %s\n", dest2);
	return (0);
}
 */