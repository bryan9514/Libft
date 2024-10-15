/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:11:24 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/15 12:21:12 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[100] = "Hello World";

// 	// printf("%s\n", memset(str + 2, '.', 3));
// 	printf("%s\n", ft_memset(str + 2, '.', 3));
// }

// int	main(void)
// {
// 	char	str[50] = "This is for programming test.";

// 	printf("\nBefore memset(): %s\n", str);
// 	// Fill 8 characters starting from str[13] with '.'
// 	ft_memset(str + 0, '.', 8 * sizeof(char));
// 	printf("After memset():  %s", str);
// 	return (0);
// }
