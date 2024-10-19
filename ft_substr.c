/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:22:48 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/19 17:03:32 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> //No funciona aun esta funcion

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	lens;
	char			*str;

	i = 0;
	lens = 0;
	// lens = ft_strlen((char *)s);
	while (s[lens] != '\0')
		lens++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str || start >= lens)
		return (NULL);
	while (start + i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <stdio.h>

int	main(void)
{
	char			str[] = "This is un test";
	unsigned int	start = 1;
	size_t			len = 15;

	char	*result = ft_substr(str, start, len);
	printf("Ft_substr : %s\n", result);
	free(result);
	return (0);
}
