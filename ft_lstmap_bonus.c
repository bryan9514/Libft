/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:46:09 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/05 18:24:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *f(void *cont)
// {
//     int *newCont = malloc(sizeof(int));
//     if (!newCont)
//         return (NULL);
//     *newCont = *(int *)cont * 2;
//     return (newCont);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_cont;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_cont = ft_lstnew(f(lst->content));
		if (!new_cont)
		{
			ft_lstclear(&new_cont, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_cont);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>

// int main(void)
// {
//     // Crear los valores iniciales y nodos
// 	int *a = malloc(sizeof(int));
// 	int *b = malloc(sizeof(int));
// 	int *c = malloc(sizeof(int));
// 	*a = 1;
// 	*b = 2;
// 	*c = 3;
//     t_list *p1 = ft_lstnew(a);
//     t_list *p2 = ft_lstnew(b);
//     t_list *p3 = ft_lstnew(c);

//     // Conectar los nodos
//     ft_lstadd_back(&p1, p2);
//     ft_lstadd_back(&p1, p3);

//     // Crear una nueva lista aplicando la función f
//     t_list *new_list = ft_lstmap(p1, f, del);

//     // Imprimir la lista original
//     printf("Lista original:\n");
//     t_list *head = p1;
//     while (head != NULL)
//     {
//         printf("Nodo en %p con contenido: %d\n", (void *)head,
	// *(int *)head->content);
//         head = head->next;
//     }

//     // Imprimir la nueva lista con el contenido transformado
//     printf("\nNueva lista (contenido duplicado):\n");
//     head = new_list;
//     while (head != NULL)
//     {
//         printf("Nodo en %p con contenido: %d\n", (void *)head,
	// *(int *)head->content);
//         head = head->next;
//     }

//     // Liberar la lista original (p1)
//     ft_lstclear(&p1, del);
	// No se libera el contenido porque apunta a variables en el stack
//     // Liberar la nueva lista
//     ft_lstclear(&new_list, del);

//     return (0);
// }
