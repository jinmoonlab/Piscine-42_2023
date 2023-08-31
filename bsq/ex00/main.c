/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:33:02 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/30 20:32:09 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_fill_zero(char *buffer)
{
	int	char_in_line;
	int	i;

	char_in_line = count_c_in_line(buffer);
	i = go_in(buffer);
	while (buffer[i] != '\n')
	{
		buffer[i] = '0';
		i++;
	}
	i += 1;
	while (buffer[i])
	{
		buffer[i] = '0';
		i = char_in_line + i + 1;
	}
	return (buffer);
}

char	*ft_fill(char *buffer, char obj)
{
	int	char_in_line;
	int	i;

	char_in_line = count_c_in_line(buffer) + 1;
	i = go_in(buffer) + char_in_line ;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			i++;
		if (buffer[i] == obj)
			i++;
		if (buffer[i - 1] == obj || buffer[i - char_in_line] == obj)
		{
			buffer[i] = '0';
			i++;
		}
		if (buffer[i] == '0')
			i++;
		if (buffer[i - char_in_line] <= buffer[i - 1])
			buffer[i] = buffer[i - char_in_line] + 1;
		else 
			buffer[i] = buffer[i - 1] + 1;
		i++;
	}
	return (buffer);
}

int	count_c_in_line(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	while (buffer[i] != '\n')
	{
		i++;
	}
	j = i;
	i++;
	while (buffer[i] != '\n')
	{
		i++;
	}
	return (i - j - 1);
}

char	ft_obj(char *buffer)
{
	int		i;
	char	obj;

	i = 0;
	while (buffer[i] != '\n')
	{
		if (!(buffer[i] >= '0' && buffer[i] <= '9'))
		{
			obj = buffer[i + 1];
			break ;
		}
		i++;
	}
	return (obj);
}

int	main(int ac, char **av)
{
	char	obj;
	char	*buffer;

	if (ac != 2)
	{
		ft_error();
		return (1);
	}
	buffer = parsing_for_big_buffer(av[1]);
	if (buffer == NULL)
	{
		ft_error();
		return (1);
	}
	obj = ft_obj(buffer);
	buffer = ft_fill_zero(buffer);
	buffer = ft_fill(buffer, obj);
	ft_putstr(buffer);
}
