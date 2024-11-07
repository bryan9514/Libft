/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:27:25 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/07 18:38:33 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	// size_t	i;
	size_t	total_s;


	if (size > INT_MAX )
		return (NULL);
	total_s = (nmemb * size);
	ptr = malloc(total_s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_s);

	// i = 0;
	// while (i < total_s)
	// {
	// 	ptr[i] = '\0';
	// 	i++;
	// }
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		*array_std;
// 	int		*array_custom;
// 	size_t	count;
// 	size_t	size;

// 	// Número de elementos
// 	count = 10;
// 	// Tamaño de cada elemento (tamaño de un entero)
// 	size = sizeof(int);
// 	// Usando la función estándar calloc
// 	array_std = (int *)calloc(count, size);
// 	// Usando tu función ft_calloc
// 	array_custom = (int *)ft_calloc(count, size);
// 	// Imprimir los valores iniciales de ambos arrays
// 	printf("Valores iniciales (calloc): ");
// 	size_t i = 0;
// 	while ( i < count)
// 	{
// 		printf("%d ", array_std[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("Valores iniciales (ft_calloc): ");
// 	i = 0;
// 	while (i < count)
// 	{
// 		printf("%d ", array_custom[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	// Liberar la memoria asignada
// 	free(array_std);
// 	free(array_custom);
// 	return (0);
// }
