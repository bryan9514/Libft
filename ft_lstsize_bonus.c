/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:45:59 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/01 12:19:16 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);

}

#include <stdio.h>

int		main(void)
{
	int		n = 10;
	int		p = 20;
	int		c = 30;
	t_list	*p1 = ft_lstnew(&n);
	t_list	*p2 = ft_lstnew(&p);
	t_list	*p3 = ft_lstnew(&c);

	p1->next = p2;
	p2->next = p3;


	printf("The number of nodes are : %d\n", ft_lstsize(p1));
	free(p1);
	free(p2);
	free(p3);
	return (0);

}
