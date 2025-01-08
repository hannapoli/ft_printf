/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:12:14 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:46:00 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_s;
	size_t	src_s;
	size_t	i;
	size_t	j;

	dst_s = ft_strlen(dst);
	src_s = ft_strlen(src);
	if (size <= dst_s)
		return (src_s + size);
	i = dst_s;
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_s + src_s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src [] = " 42";
	char	dst[15] = "Urduliz";
	
	printf("Reimplemented function:\n");
	printf("The total length is %zu\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("The edited string: %s\n", dst);
#if defined__APPLE__ || defined__BSD_VISIBLE || defined_GNU_SOURCE

	printf("Original function:\n");
	printf("The total length is %zu\n", strlcat(dst, src, sizeof(dst)));
	printf("The edited string: %s\n", dst);
#else

	printf("The original strlcat is not available on this system.\n");
#endif

	return (0);
}
*/
