/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:20:00 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/05 18:36:21 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new element at the end of the list.
 *
 * This function adds the node pointed to by 'new' to the end of the list
 * pointed to by 'lst'. If the list is empty, the new node becomes the
 * first node of the list.
 *
 * @param lst A pointer to the pointer to the first element of the list.
 *            If the list is empty, this will be updated to point to the
 *            new node.
 * @param new The new node to be added to the list. This node's 'next'
 *            pointer will be set to NULL if it becomes the last node.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!*lst)
		*lst = new;
	else
	{
		last_node = *lst;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new;
	}
}

// #include <stdio.h>

// int		main(void)
// {
// 	int		a = 10;
// 	int		b = 20;
// 	int		c = 30;
// 	t_list	*p1 = ft_lstnew(&a);
// 	t_list	*p2 = ft_lstnew(&b);
// 	t_list	*p3 = ft_lstnew(&c);

// 	ft_lstadd_back(&p1, p2);
// 	ft_lstadd_back(&p1, p3);

// 	t_list	*head = p1;
// 	while (head != NULL)
// 	{
// 		printf("Nodo creado en %p con contenido : %d\n", (void *)head,
// 			*(int *)head->content);
// 		head = head->next;
// 	}
// 	free(p1);
// 	free(p2);
// 	free(p3);
// 	return (0);
// }
