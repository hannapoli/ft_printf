/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:55:55 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:46:03 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (size > 0)
	{
		i = 0;
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Up2You!";
	char	dst[10];

	printf("Reimplemented function:\n");
	printf("The length is %zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("The copied string: %s\n", dst);
#if defined__APPLE__ || defined__BSD_VISIBLE || defined_GNU_SOURCE

	printf("Original function:\n");
	printf("The length is %zu\n", strlcpy(dst, src, sizeof(dst)));
	printf("The copied string: %s\n", dst);
#else

	printf("The original strlcpy is not available on this system.\n");
#endif

	return (0);
}
*/