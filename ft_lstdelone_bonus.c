/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:50:41 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/05 18:17:47 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  void		del(void *cont)
// {
// 	free(cont);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
// 	t_list	*head;

// 	ft_lstadd_back(&p1, p2);
// 	ft_lstadd_back(&p1, p3);

// 	ft_lstdelone(p3, del);
// 	head = p1;
// 	p2->next = NULL;
		//apunto el punto de p2->next a NULL porque
		// si no hay segmentacion en el buble
// 	while (head != NULL)
// 	{
// 		printf("Nodo creado en %p con contenido : %d\n", (void*)head,
			// *(int*)head->content);
// 		head = head->next;
// 	}
// 	free(p1);
// 	free(p2);
// 	// free(p3); // no hago free porque ya no exite
// }
