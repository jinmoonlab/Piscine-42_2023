/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:00:30 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/30 19:31:13 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*parsing_for_big_buffer(const char *ref)
{
	int		fd;
	int		size_buffer;
	char	*buffer;

	size_buffer = ft_len_buffer(ref);
	if (size_buffer == -1)
		return (NULL);
	buffer = malloc(sizeof(char) * (size_buffer + 1));
	if (buffer == NULL)
		return (NULL);
	fd = open(ref, O_RDONLY);
	if (fd >= 0)
	{
		read(fd, buffer, size_buffer);
		buffer[size_buffer + 1] = '\0';
	}
	close(fd);
	return (buffer);
}
