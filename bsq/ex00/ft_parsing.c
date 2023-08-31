/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:12:17 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/30 19:46:41 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_error(void)
{
	ft_putstr("Error");
}

int	ft_count_line(char *buffer)
{
	int	i;
	int	count_line;

	i = 0;
	count_line = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			count_line++;
		}
		i++;
	}
	return (count_line);
}

int	ft_len_buffer(const char *ref)
{
	int		fd;
	int		byteread;
	int		size;
	char	buffer[1024];

	byteread = 1;
	size = 0;
	fd = open(ref, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (byteread > 0)
	{
		byteread = read(fd, buffer, 1024);
		if (byteread != -1)
			size += byteread;
		else 
			break ;
	}
	return (size);
}

int	go_in(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
	{
		i++;
	}
	return (i + 1);
}
