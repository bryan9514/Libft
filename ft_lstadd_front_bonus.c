/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:07:17 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/01 11:10:56 by brturcio         ###   ########.fr       */
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
	if (!lst || !new) // Verifica que los punteros no sean nulos
		return ;
	new->next = *lst; // `new` apunta al nodo actual al inicio de la lista
	*lst = new;       // `*lst` ahora apunta al nuevo nodo
}

// #include <stdio.h>

// void	printList(t_list *head)
// {
// 	while (head != NULL)
// 	{
// 		printf("Nodo creado en %p con contenido : %d\n", (void *)head,
// 			*(int *)head->content);
// 		head = head->next;
// 	}
// }
// int	main(void)
// {
// 	int		p;
// 	int		n;
// 	t_list	*header;
// 	t_list	*second;

// 	n = 42;
// 	p = 50;
// 	header = ft_lstnew(&p);
// 	second = ft_lstnew(&n);
// 	ft_lstadd_front(&header, second);
// 	printList(header);
// 	return (0);
// }
