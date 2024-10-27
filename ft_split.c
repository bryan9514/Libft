/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:30 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/25 16:32:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	size_t	i;
	size_t	is_word;
	size_t	counter;

	counter = 0;
	is_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			if (is_word == 0)
			{
				counter++;
				is_word = 1;
			}
		}
		else
			is_word = 0;
		i++;
	}
	return (counter);
}

static void	**div_words(char **result, char const *str, char sep)
{
	size_t	i;
	size_t	words;
	size_t	len;
	size_t	index;
	

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
	size_t		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	array = malloc(sizeof(char*) * (words + 1));
	if (!array)
		return (NULL);
	div_words(array, s, c);
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
