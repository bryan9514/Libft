/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:50:29 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/25 13:19:14 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	f(unsigned int i, char c)
// {
// 	if (i % 2 != 0 && (c >= 'a' && c <= 'z'))
// 		return (c - 32);
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	if (!s)
		return (NULL);
	new_s = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	while (s[i] != '\0')
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "This is un test";
// 	char	*result;

// 	result = ft_strmapi(str, f);
// 	printf("ft_strmapi : %s\n", result);
// 	free(result);
// 	return (0);
// }
