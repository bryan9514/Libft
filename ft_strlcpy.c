/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:13:43 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/22 20:34:53 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	//if (size > 0)
	//{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	//}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char	dest[] = "nadaa";
// 	char	src[] = "Hello";
// 	size_t	n;

// 	n = 5;
// 	printf("ft_strlcpy: %zu\n", ft_strlcpy(dest, src, n));
// 	printf("strlcpy: %zu\n", strlcpy(dest, src, n));
// 	printf("Destino : %s\n", dest);
// }
