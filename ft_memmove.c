/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:44:58 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/15 12:34:41 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*recet;
	char	*emiso;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	recet = (char *)dest;
	emiso = (char *)src;
	if (src < dest)
	{
		i = n;
		while (i-- > 0)
			recet[i] = emiso[i];
	}
	else
	{
		i = 0;
		while (i++ < n)
			recet[i] = emiso[i];
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = "World";
// 	size_t	n;

// 	n = 5;
// 	ft_memmove(dest, src, n);
// 	//memmove(dest, src, n);
// 	printf("%s\n", dest);
// }
