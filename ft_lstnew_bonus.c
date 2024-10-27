/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:56:59 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/27 15:49:26 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 		void *content;
// 		struct s_list *next;
// }				t_list;


t_list	*ft_lstnew(void *content)
{
	content = NULL;
	return (content);
}


#include <stdio.h>
int main(void)
{
	t_list	*content = ft_lstnew(content);

	// content
	printf("%p\n", content);
	return (0);
}
