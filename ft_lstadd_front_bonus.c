/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:07:17 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/03 09:42:03 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new node at the beginning of a linked list.
 *
 * This function takes a pointer to the first node of a linked list
 * and a new node, placing the new node at the start of the list.
 * It then updates the head pointer of the list to point to the new node.
 *
 * @param lst Pointer to the pointer of the first node of the list. If the list
 * is empty, this pointer should point to NULL.
 * @param new The new node to be added at the start of the list. This node
 * should be created beforehand and should not be NULL.
 *
 * @return This function does not return a value.
 *
 * @note If `lst` or `new` is NULL, the function does not perform any operation.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst) // Verifica que los punteros no sean nulos
		lst = &new;
	new->next = *lst; // `new` apunta al nodo actual al inicio de la lista
	*lst = new;       // `*lst` ahora apunta al nuevo nodo
}

#include <stdio.h>

int		main(void)
{
	int		a = 10;
	int		b = 20;
	int		c = 30;
	t_list	*p1 = ft_lstnew(&a);
	t_list	*p2 = ft_lstnew(&b);
	t_list	*p3 = ft_lstnew(&c);

	ft_lstadd_front(&p1, p2);
	ft_lstadd_front(&p1, p3);

	t_list	*head = p1;
	while (head != NULL)
	{
		printf("Nodo creado en %p con contenido : %d\n", (void *)head,
			*(int *)head->content);
		head = head->next;
	}
	t_list *tmp;
    while (p1 != NULL)
    {
        tmp = p1;         // Guarda el nodo actual
        p1 = p1->next;   // Mueve el puntero al siguiente nodo
        free(tmp);       // Libera el nodo guardado
    }
	// free(p1);
	// free(p2);
	// free(p3);
	return (0);
}
