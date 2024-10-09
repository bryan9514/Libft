/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:44:58 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/09 15:18:05 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ft_dest
	char	*ft_src;
	size_t	i;

	i = 0;
	ft_dest = (char*)dest;
	ft_src = (char*)src;
	while (i < n )
	{
		
	}

}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[100];
	char	src[] = "12345";
	size_t	n = 5;

	ft_memmove(dest, src, n);
	printf("%s\n", dest);
}
