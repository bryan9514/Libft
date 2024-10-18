/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:01:10 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/18 09:07:53 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char	str[] = "Hola Mundo";

// 	printf("ft_strdup : %s\n", ft_strdup(str));
// 	printf("strdup : %s\n", strdup(str));
// 	return (0);
// }

// int		main(void)
// {
// 	char	str[] = "Hola Mundo";
// 	char	*dup1;
// 	char	*dup2;

// 	// Prueba con ft_strdup (tu implementación)
// 	dup1 = ft_strdup(str);
// 	if (dup1 == NULL)
// 	{
// 		printf("Error: No se pudo duplicar la cadena con ft_strdup\n");
// 		return (1);
// 	}
// 	printf("ft_strdup : %s\n", dup1);

// 	// Prueba con strdup (de la biblioteca estándar)
// 	dup2 = strdup(str);
// 	if (dup2 == NULL)
// 	{
// 		printf("Error: No se pudo duplicar la cadena con strdup\n");
// 		free(dup1); // Liberar dup1 antes de salir
// 		return (1);
// 	}
// 	printf("strdup    : %s\n", dup2);

// 	// Liberar la memoria reservada con ft_strdup
// 	free(dup1);

// 	// Liberar la memoria reservada con strdup
// 	free(dup2);

// 	return (0);
// }
