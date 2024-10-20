/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:19:02 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/20 17:03:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set)) + 1)
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set[0])
		{
			j = 0;
			while (s1[i + j] == set[j])
			{
				
			}

		}
		i++;
	}

	return (str);
}

#include <stdio.h>

int		main(void)
{
	char	str[] = "this is un test, this is un test, this";
	char	set[] = "this";
	char	*result;

	result = ft_strtrim (s1, set);
	printf ("ft_strtrim : %s\n", result);
	return (0);
}
