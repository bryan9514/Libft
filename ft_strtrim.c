/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:19:02 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/23 09:55:44 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_set(s1[j - 1], set))
		j--;
	str = malloc(sizeof(char) * ((j - i) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char	str[] = "this is un test, this is un test, this";
// 	char	set[] = "this";
// 	char	*result;

// 	result = ft_strtrim (str, set);
// 	printf ("ft_strtrim : %s\n", result);
// 	free (result);
// 	return (0);
// }
