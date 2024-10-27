/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:19:44 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/25 15:08:51 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void		f(unsigned int i, char* s)
// {
// 	while (s[i] )
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int 	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// int		main(void)
// {
// 	char	str = "This is un test";
// 	char	*result;

// 	result = ft_striteri(str, f);
// 	printf ("ft_striteri : %s\n", result);
// 	free(result);
// 	return (0);
// }
