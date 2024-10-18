/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:45:58 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/17 17:58:19 by bt24             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while ((big[i] != '\0') && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while ((big[i + j] == little[j]) && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "This is un test for to find";
// 	char	find[] = "is";
// 	size_t	n = 3;

// 	printf("ft_strnstr : %s\n", ft_strnstr(str, find, n));
// 	// printf("vrai strnstr : %s\n", strnstr(str, find, n));
// 	return (0);
// }
