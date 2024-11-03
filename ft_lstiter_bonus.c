/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:39:06 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/03 19:23:36 by brturcio         ###   ########.fr       */
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
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

#include <stdio.h>

// int main(void)
// {
//     // Asignación dinámica de los contenidos para cada nodo
//     int *a = malloc(sizeof(int));
//     int *b = malloc(sizeof(int));
//     int *c = malloc(sizeof(int));
//     if (!a || !b || !c)
//     {
//         printf("Error: No se pudo asignar memoria.\n");
//         free(a);
//         free(b);
//         free(c);
//         return (1);
//     }
//     *a = 10;
//     *b = 20;
//     *c = 30;

//     // Crear nodos con contenido dinámico
//     t_list *p1 = ft_lstnew(a);
//     t_list *p2 = ft_lstnew(b);
//     t_list *p3 = ft_lstnew(c);
//     if (!p1 || !p2 || !p3)
//     {
//         printf("Error: No se pudo asignar memoria para los nodos.\n");
//         ft_lstdelone(p1, del);
//         ft_lstdelone(p2, del);
//         ft_lstdelone(p3, del);
//         return (1);
//     }

//     // Conectar los nodos
//     ft_lstadd_back(&p1, p2);
//     ft_lstadd_back(&p1, p3);

//     // Eliminar p3 y liberar su contenido
//     ft_lstdelone(p3, del);
//     p2->next = NULL;  // Apunta p2->next a NULL para evitar segmentación

//     // Imprimir los nodos restantes
//     t_list *head = p1;
//     while (head != NULL)
//     {
//         printf("Nodo creado en %p con contenido: %d\n", (void*)head, *(int*)head->content);
//         head = head->next;
//     }

//     // Liberar los nodos restantes (p1 y p2) y sus contenidos
//     ft_lstdelone(p1, del);
//     ft_lstdelone(p2, del);

//     return (0);
// }
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
	ft_lstdelone(p1, del);
	ft_lstdelone(p2, del);
	ft_lstdelone(p3, del);
	return (0);

}
