/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:23:59 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 23:37:26 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && ((i + j) < len))
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	haystack[] = "Forest";
	const char	needle[] = "rest";
	size_t		length;
	char		*locate_substring;

	length = 7;
	printf("Reimplemented function:\n");
	locate_substring = ft_strnstr(haystack, needle, length);
	if (locate_substring)
		printf("Found substring: \"%s\"\n", locate_substring);
	else
		printf("Substring not found within the given length.\n");
#if defined__APPLE__ || defined__BSD_VISIBLE || defined_GNU_SOURCE

	printf("Original function:\n");
	locate_substring = strnstr(haystack, needle, length);
	if (locate_substring)
		printf("Found substring: \"%s\"\n", locate_substring);
	else
		printf("Substring not found within the given length.\n");
	#else

	printf("The original strnstr is not available on this system.\n");
#endif

	return (0);
}
 */