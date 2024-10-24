/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:54:14 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/15 12:17:10 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int x = '1';
// 	printf("%d", ft_isprint(x));
// 	return (0);
// }
