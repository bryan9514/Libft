/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:10:27 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/20 16:03:10 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	str[] = "This is un test";
// 	int		c;

// 	c = 't';
// 	printf("ft_strrchr : %s\n", ft_strrchr(str, c));
// 	printf("vrai strrchr : %s\n", strrchr(str, c));
// }
