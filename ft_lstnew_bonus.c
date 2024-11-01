/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:56:59 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/31 00:08:05 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 		void *content;
// 		struct s_list *next;
// }				t_list;


t_list	*ft_lstnew(void *content)
{
	t_list	*cont;

	cont = malloc(sizeof(t_list));
	if(!cont)
		return (NULL);
	cont->content = content;
	cont->next = NULL;
	return (cont);
}


// #include <stdio.h>
// int main(void)
// {
//     int value = 42;  // Valor de ejemplo para el contenido del nodo
//     t_list *content = ft_lstnew(&value);

//     // Imprime la dirección de memoria del nodo y el valor del contenido
//     if (content)
//         printf("Nodo creado en %p con contenido %d\n", (void *)content, *(int *)(content->content));
//     else
//         printf("Error al crear el nodo.\n");

//     // Libera la memoria del nodo después de la prueba
//     free(content);
//     return (0);
// }
