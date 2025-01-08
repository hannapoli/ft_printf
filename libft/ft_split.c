/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:47:25 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/13 22:47:47 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_number(const char *s, char c)
{
	size_t	w_number;
	size_t	i;

	w_number = 0;
	i = 0;
	while (s[i] != 0)
	{
		if ((s[i] != c) && ((i == 0) || (s[i - 1] == c)))
			w_number++;
		i++;
	}
	return (w_number);
}

static char	*get_word(const char *s, size_t start, size_t end)
{
	size_t	len;
	char	*word;

	len = end - start;
	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s + start, len);
	word[len] = '\0';
	return (word);
}

static void	free_dest(char **dest, size_t size)
{
	size_t	word;

	word = 0;
	while (word < size)
	{
		free(dest[word]);
		word++;
	}
	free(dest);
}

static int	fill_dest(const char *s, char c, char **dest, size_t word_count)
{
	size_t	i;
	size_t	start;
	size_t	word_i;

	i = 0;
	start = 0;
	word_i = 0;
	while ((s[i] != '\0') && (word_i < word_count))
	{
		if ((s[i] != c) && ((i == 0) || (s[i - 1] == c)))
			start = i;
		if ((s[i] != c) && ((s[i + 1] == '\0') || (s[i + 1] == c)))
		{
			dest[word_i] = get_word(s, start, (i + 1));
			if (!dest[word_i])
				return (1);
			word_i++;
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	word_count;

	if (s == NULL)
		return (NULL);
	word_count = words_number(s, c);
	if ((s[0] == '\0') || (word_count == 0))
	{
		dest = malloc(sizeof(char *));
		if (dest == NULL)
			return (NULL);
		dest[0] = NULL;
		return (dest);
	}
	dest = malloc((word_count + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	if (fill_dest(s, c, dest, word_count))
	{
		free_dest(dest, word_count);
		return (NULL);
	}
	dest[word_count] = NULL;
	return (dest);
}
/* 
#include <stdio.h>

int	main(void)
{
	char	**final_split;
	size_t	i;

	i = 0;
	final_split = ft_split("This split melts my brain.", ' ');
	if (final_split == NULL)
	{
		printf("Memory allocation failed. \n");
		return (1);
	}
	while (final_split[i])
	{
		printf("Word %zu: %s\n", i + 1, final_split[i]);
		free(final_split[i]);
		i++;
	}
	free (final_split);
	return (0);
}
 */