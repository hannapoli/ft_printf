/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:31:21 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/14 22:08:33 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* 
// Simple test:

int	main(void)
{
	ft_putchar_fd('#', 1);
	ft_putchar_fd('4', 1);
	ft_putchar_fd('Z', 1);
	return (0);
}
 */

//Detailed test:
/* 
#include <fcntl.h>

int	main(void)
{
	int	fd;
	
	fd = open("fd_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		write(2, "Error opening file\n", 19);
		return (1);
	}
	ft_putchar_fd('A', fd);
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('M', fd);
	ft_putchar_fd('\n', fd);
	close(fd);

	ft_putchar_fd('E', 2);
	write(2, "\n", 1);
	ft_putchar_fd('r', 2);
	write(2, "\n", 1);

	return (0);
}
 */