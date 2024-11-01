/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:20:00 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/01 12:50:29 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastNode;

	if(!*lst)
		*lst = new;
	else
	{
		lastNode = *lst;
		while (lastNode->next != *lst)
			lastNode = lastNode->next;
		lastNode->next = new;
	}


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
	t_list	*head;

	head = p1;
	ft_lstadd_back(&p1, p2);
	ft_lstadd_back(&p2, p3);

	while (head != NULL)
	{
		printf("Nodo creado en %p con contenido : %d\n", (void *)head,
			*(int *)head->content);
		head = head->next;
	}
	free(p1);
	free(p2);
	free(p3);
	return (0);
}
