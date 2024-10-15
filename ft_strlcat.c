/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:04:01 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/15 12:18:07 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	p;

	j = 0;
	p = 0;
	while (dst[j] != '\0')
		j++;
	while (src[p] != '\0')
		p++;
	if (size <= j)
		return (size + p);
	i = 0;
	while (src[i] != '\0' && (j + i) < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + p);
}
// int	main(void)
// {
// 	char	dest[100] = "Hello";
// 	char	src[] = "World";
// 	size_t	n;

// 	n = 5;
// 	printf("ft_strlcat : %zu\n", ft_strlcat(dest, src, n));
// 	printf("vrai strlcat : %zu\n", strlcat(dest, src, n));
// 	printf("Destino :  %s\n", dest);
// }
