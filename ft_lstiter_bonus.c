/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:39:06 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/03 12:22:01 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		f(void *cont)
{
	int		*intCont = (int *)cont;

	*intCont = 0;
}

void 	ft_lstiter(t_list *lst, void (*f)(void *))
{

	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
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

	ft_lstiter(p1, f);

	head = p1;
	if (head != NULL)
	{
		while (head != NULL)
		{
			printf("Nodo creado en %p con contenido : %d\n ", (void*)head, *(int*)head->content);
			head = head->next;
		}
	}
	else
		printf("Not List \n");
	return (0);

}
