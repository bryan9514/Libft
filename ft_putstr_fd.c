/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:13:44 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/28 21:36:36 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int		main(void)
// {
// 	char	str[] = "This is un test";
// 	int		fd;

// 	fd = 1;
// 	ft_putstr_fd (str, fd);
// 	return (0);
// }
