/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:20:14 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/11 17:09:55 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char*)&s[i]);
	return(NULL);
}

int	main(void)
{
	char	str[] = "Hello";
	int	c = 'x';

	printf("ft_strchr : %s\n", ft_strchr(str, c));
	printf("vrai strchr : %s:\n", strchr(str, c));
}
