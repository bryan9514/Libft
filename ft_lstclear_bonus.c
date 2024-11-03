/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 09:54:24 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/03 11:38:18 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		del(void *cont);

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*tmp;

	if ((!(*lst)) || (!del) || (!lst))
		return;
	while(*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst , del);
		*lst = tmp;
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

	ft_lstadd_back(&p1, p2 );
	ft_lstadd_back(&p1, p3 );

	ft_lstclear(&p1, del);

	head = p1;
	if (head != NULL)
	{
		while (head != NULL)
		{
			printf("Nodo creado en %p con contenido %d : ", (void*)head, *(int*)head->content);
			head = head->next;
		}
	}
	else
		printf("Not List \n");
	return (0);

}
