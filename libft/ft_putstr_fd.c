/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:28:57 by hpolishc          #+#    #+#             */
/*   Updated: 2024/12/17 11:59:42 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
/* 
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char 	s[] = "Keep trying!";

	fd = open("fd_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		write(2, "Error opening file\n", 19);
		return (1);
	}
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}
 */