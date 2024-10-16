/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:44:34 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/17 18:00:35 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

// int		main(void)
// {
// 	char	str[] = "This is un test";
// 	int		c;
// 	size_t	n = 15;

// 	c = 't';
// 	printf("ft_memchr : %p\n", ft_memchr(str, c, n));
// 	printf("vrai memchr : %p\n", memchr(str, c, n));
// }
