/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:53:27 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/10 11:51:29 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*recet;
	char	*emiso;
	size_t	i;

	if (!dest && !src )
		return (NULL);
	recet = (char*)dest;
	emiso = (char*)src;
	i = 0;
	while (i < n)
	{
		recet[i] = emiso[i];
		i++;
	}
	return (dest);

}

int	main(void)
{
	char	dest[100];
	char	src[] = "Hello World";
	size_t	n = 11;

	ft_memcpy(dest, src, n);
	printf("%s\n", dest);

// 	memcpy(dest, src, n);
// 	printf("%s\n", dest);


}
