/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:14:05 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/12 14:43:31 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);

}

int	main(void)
{
	const char	s1[] = "Hel";
	const char	s2[] = "Hello";
	size_t	n = 6;

	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
	printf("vrai strncmp : %d\n", strncmp(s1, s2, n));
	return (0);

}
