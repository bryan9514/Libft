/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:39:06 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/05 18:27:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void		f(void *cont)
// {
// 	int		*intCont = (int *)cont;

// 	*intCont = 0;
// }
/**
 * @brief Applies a function to each element of a linked list.
 *        Aplica una función a cada elemento de una lista enlazada.
 *
 * This function iterates over a linked list and applies the given function
 * to the content of each node in the list.
 * Esta función recorre una lista enlazada y aplica la función dada
 * al contenido de cada nodo en la lista.
 *
 * @param lst Pointer to the first node of the list.
 * @param f Pointer to the function to be applied to each node's content.
 *          The function should accept a void pointer and return nothing.
 *
 * @note The function `f` should be designed to operate on the node's content
 *       without freeing the node or its content, as `ft_lstiter` only applies

	*       the function and does not modify the list structure. La función `f`
	debe
 *       estar diseñada para operar sobre el contenido del nodo sin liberar el
 *       nodo ni su contenido, ya que `ft_lstiter` solo aplica la función y no
 *       modifica la estructura de la lista.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     // Declaración de los valores en el stack
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     // Crear nodos sin asignación dinámica para el contenido
//     t_list *p1 = ft_lstnew(&a);
//     t_list *p2 = ft_lstnew(&b);
//     t_list *p3 = ft_lstnew(&c);

//     if (!p1 || !p2 || !p3)
//     {
//         printf("Error: No se pudo asignar memoria para los nodos.\n");
//         ft_lstdelone(p1, NULL);  // NULL como del, ya que no libera contenido
//         ft_lstdelone(p2, NULL);
//         ft_lstdelone(p3, NULL);
//         return (1);
//     }

//     // Conectar los nodos
//     ft_lstadd_back(&p1, p2);
//     ft_lstadd_back(&p1, p3);

//     // Itinera en la lista y modifica el contenido a 0
//     ft_lstiter(p1, f);

//     // Imprimir los nodos restantes
//     t_list *head = p1;
//     while (head != NULL)
//     {
//         printf("Nodo creado en %p con contenido: %d\n", (void*)head,
	// *(int*)head->content);
//         head = head->next;
//     }

//     // Liberar solo los nodos,
	// ya que el contenido no fue asignado dinámicamente
// 	free(p1);
// 	free(p2);
// 	free(p3);
//     return (0);
// }
