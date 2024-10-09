/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:13:43 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/09 16:51:58 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] != '\0')
		j++;
	if (j < size)
	{
		i = 0;
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (src[i] != '\0' && i < j-1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return(j);
}
#include <stdio.h>

int	main(void)
{
	char	dest[] = "nadaa";
	char	src[] = "Hello";
	size_t	n = 5;

	printf("%d\n",ft_strlcpy(dest, src, n));
}

