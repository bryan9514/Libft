/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:21:46 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/28 21:38:10 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd (s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char	str[] = "This is un test";
// 	int		fd;

// 	fd = 1;
// 	ft_putendl_fd (str, fd);
// 	return (0);
// }
