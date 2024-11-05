/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:01:09 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/05 18:34:36 by bt24             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
// 	int		n;

// 	c = 'a';
// 	n = 1;
// 	ft_putchar_fd(c, n);
// 	return (0);
// }
