/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:27:25 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/14 22:37:08 by bt24             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char    *ptr;
    size_t  i;
    size_t  total_s;

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

int main() {
    size_t count = 5;    // Número de elementos
    size_t size = sizeof(int); // Tamaño de cada elemento (tamaño de un entero)

    // Usando la función estándar calloc
    int *array_std = (int *)calloc(count, size);
    if (array_std == NULL) {
        printf("Error al asignar memoria usando calloc.\n");
        return 1;
    }

    // Usando tu función ft_calloc
    int *array_custom = (int *)ft_calloc(count, size);
    if (array_custom == NULL) {
        printf("Error al asignar memoria usando ft_calloc.\n");
        free(array_std);  // Liberar la memoria asignada por calloc
        return 1;
    }

    // Imprimir los valores iniciales de ambos arrays
    printf("Valores iniciales (calloc): ");
    for (size_t i = 0; i < count; i++) {
        printf("%d ", array_std[i]);
    }
    printf("\n");

    printf("Valores iniciales (ft_calloc): ");
    for (size_t i = 0; i < count; i++) {
        printf("%d ", array_custom[i]);
    }
    printf("\n");

    // Liberar la memoria asignada
    free(array_std);
    free(array_custom);

    return 0;
}
