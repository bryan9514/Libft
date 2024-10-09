/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:53:27 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/09 14:44:22 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*recet;
	char	*emiso;
	size_t	i;

	i = 0;
	recet = (char*)dest;
	emiso = (char*)src;
	while (emiso[i] != '\0' && i < n)
	{
		recet[i] = emiso[i];
		i++;
	}
	return (dest);

}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[100];
// 	char	src[] = "Hello World";
// 	size_t	n = 2;

// 	ft_memcpy(dest, src, n);
// 	printf("%s\n", dest);
// }
