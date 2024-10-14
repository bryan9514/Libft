/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:30:53 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/14 18:13:01 by bt24             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	sing;
	int	result;

	i = 0;
	result = 0;
	sing = 1;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sing = sing * -1;
		}
		i++;
	}
	while (nptr[i]  >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sing);
}
int	main(void)
{
	char	nptr[] = "$100";



	printf ("ft_atoi : %d\n", ft_atoi(nptr));
	printf ("vrai atoi : %d\n", atoi(nptr));
	return (0);
}
