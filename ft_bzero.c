/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:37:40 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/15 12:16:42 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	str[100] = "Hello World";

// 	ft_bzero(str + 5, 5);
// 	printf("ft_bzero : %s\n", str);
// 	// bzero(str + 5, 5);
// 	// printf("vrai bzero : %s\n", str);
// }
