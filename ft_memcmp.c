/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:47:58 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/14 11:47:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	if (!str1 && !str2)
		return(0)
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char 	s1[] = "Hell World";
	 //char	s2[] = "Hell World";
	int		a = -5555555; // para probar con otro tipo de dato
	size_t	n = 10;

	printf ("ft_memcmp : %d\n", ft_memcmp(s1, &a , n)); // ejemplo de como tengo que enviar un int a la funcion si la funcion espera un puntero
	printf ("vrai memcmp : %d\n", memcmp(s1, &a, n));
	return (0);
}
