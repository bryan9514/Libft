/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:37:46 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/24 18:47:40 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_talle(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_fill(char *str, int n, int size)
{
	str[size] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;

	if (n == -2147483648)
	{
		result = ft_strdup("-2147483648");
		return (result);
	}
	size = ft_count_talle(n);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result = ft_fill(result, n, size);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		n;
// 	char	*result;

// 	n = 200;
// 	result = ft_itoa(n);
// 	printf("ft_itoa : %s\n", result);
// 	free(result);
// 	return (0);
// }
// int     main(void)
// {
//     char *number;

//     number = ft_itoa(12345);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(-2147483648);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(2147483647);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(1);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(12345);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(-12345);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(0);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     number = ft_itoa(-1);
//     printf("%s\n", number);
//     free(number); // Liberar memoria

//     return (0);
// }
