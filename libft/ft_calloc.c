/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:39:38 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 10:45:04 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if ((count != 0) && (size != 0))
	{
		if (total_size / count != size)
			return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, total_size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr1;
	int	*arr2;
	int	i;

	i = 0;
	printf("Reimplemented function:\n");
	arr1 = (int *) ft_calloc(5, sizeof(int));
	if (arr1 == NULL)
		return (1);
	while (i < 5)
	{
		printf("The 1st array[%d] = %d\n", i, arr1[i]);
		i++;
	}
	free(arr1);

	printf("Original function:\n");
	arr2 = (int *) calloc(5, sizeof(int));
	if (arr2 == NULL)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("The 2nd array[%d] = %d\n", i, arr2[i]);
		i++;
	}
	free(arr2);
	return (0);
}
*/