/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:27:25 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/15 12:16:57 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total_s;

	total_s = nmemb * size;
	ptr = malloc(total_s);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_s)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int		*array_std;
// 	int		*array_custom;
// 	size_t	count;
// 	size_t	size;

// 	// Número de elementos
// 	count = 5;
// 	// Tamaño de cada elemento (tamaño de un entero)
// 	size = sizeof(int);
// 	// Usando la función estándar calloc
// 	array_std = (int *)calloc(count, size);
// 	// Usando tu función ft_calloc
// 	array_custom = (int *)ft_calloc(count, size);
// 	// Imprimir los valores iniciales de ambos arrays
// 	printf("Valores iniciales (calloc): ");
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("%d ", array_std[i]);
// 	}
// 	printf("\n");
// 	printf("Valores iniciales (ft_calloc): ");
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("%d ", array_custom[i]);
// 	}
// 	printf("\n");
// 	// Liberar la memoria asignada
// 	free(array_std);
// 	free(array_custom);
// 	return (0);
// }
