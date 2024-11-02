/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:50:41 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/02 23:59:44 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{

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

	ft_lstadd_back(&p1, p2);
	ft_lstadd_back(&p1, p3);

	head = p1;
	while (head != NULL)
	{
		printf("Nodo creado en %p con contenido : %d\n", (void*)head, *(inbt*)head->content);
		head = head->next;
	}
	free(p1);
	free(p2);
	free(p3);
}
