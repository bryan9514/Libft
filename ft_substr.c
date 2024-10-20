/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:22:48 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/20 09:30:22 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> //No funciona aun esta funcion

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	 ft_strlen((char*)s);
	if (start > (unsigned int)ft_strlen(s))
		return(ft_strdup(""));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			str[] = "This is un test";
// 	unsigned int	start = 1;
// 	size_t			len = 15;

// 	char	*result = ft_substr(str, start, len);
// 	printf("Ft_substr : %s\n", result);
// 	free(result);
// 	return (0);
// }
