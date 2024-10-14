/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:45:58 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/14 12:23:56 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return((char*)&haystack[i]);
	while (haystack[i] != '\0') // mientras la cadena donde buscono termina.
	{
		if (haystack[i] == needle[0]) // para comprobar la primera aparicion si son iguales
		{
			j = 0;
			while (needle[j] == haystack[i + j]) // bucle para comprobar si todo lo que busco esta en la str
			{
				j++;
				if (needle[j] == '\0')  // si lo que busco llega al final es porque es todo igual
					return ((char*)&haystack[i]); // retorno el puntero donde encontre la concidencia.
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "This is un test for to find";
	char	find[] = "or";

	printf ("ft_strstr : %s\n", ft_strstr(str, find));
	printf ("vrai strstr : %s\n", strstr(str, find));
	return (0);
}

