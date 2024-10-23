/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:30 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/23 14:35:06 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	is_word;
	size_t	counter;

	counter = 0;
	is_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			if (is_word == 1)
			{
				counter++;
				is_word = 0;
			}
		}
		else
			is_word = 1;
		i++;
	}
	return (counter);
}
static	char	**ft_div_words(char** str, char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	len;
	size_t	index;
	char	**array;

	i = 0;
	index = 0;
	while (i < words)
	{
		len = 0;
		while (s[index + len] != c)
			len++;
		array[i] = malloc(len + 1);
		len = 0;
		while (s[index] != c)
		{
			array[i][len] = s[index];
			len++;
			index++;
		}
		index++;
		array[i][len] = '\0';
		i++;
	}
	return (array);
}


char	**ft_split(char const *s, char c)
{
	char	**array;

	words = ft_count_words(s, c);
	array = (char **)ft_calloc(words + 1, sizeof(char));
	if (!array)
		return (NULL);
	ft_div_words (array, s, c);
	return (array);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "This is un test";
	char	c;
	char	**result;
	int		words;
	int		i;

	i = 0;
	words = ft_count_words(str, 's');
	c = ' ';
	result = ft_split(str, c);
	while (i < words)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
