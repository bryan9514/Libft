/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:12:29 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/01 12:16:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*p1;
	t_list	*p2;
	t_list	*p3;
	t_list	*last;

	a = 10;
	b = 20;
	c = 200000;
	p1 = ft_lstnew(&a);
	p2 = ft_lstnew(&b);
	p3 = ft_lstnew(&c);
	p1->next = p2;
	p2->next = p3;
	last = ft_lstlast(p1);
	if (last)
		printf("Last element content: %d\n", *(int *)(last->content));
	else
		printf("The list is empty.\n");
	// Free the allocated memory (important!)
	free(p1);
	free(p2);
	free(p3);
	return (0);
}
