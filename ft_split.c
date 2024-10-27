/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:30 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/27 14:22:50 by brturcio         ###   ########.fr       */
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

static void	ft_free(char **result, int i)
{
	while (i != 0)
	{
		free(result[i]);
		i--;
	}
}

static char	**div_words(char **result, char const *str, char sep)
{
	size_t	i;
	size_t	words;
	size_t	len;
	size_t	index;

	i = 0;
	index = 0;
	words = count_words(str, sep);
	while (i < words)
	{
		len = 0;
		while (str[index] == sep)
			index++;
		while (str[index + len] != sep)
			len++;
		result[i] = malloc(len + 1);
		if (!result[i])
		{
			ft_free(result, i - 1);
			return (NULL);
		}
		len = 0;
		while (str[index] != sep)
		{
			result[i][len] = str[index];
			len++;
			index++;
		}
		index++;
		if (i < words)
			result[i][len] = '\0';
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	div_words(array, s, c);
	return (array);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "      split       this for   me  !       ";
	char	c;
	char	**result;
	int		words;
	int		i;

	i = 0;
	c = ' ';
	words = count_words(str, c);
	result = ft_split(str, c);
	while (i < words)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
