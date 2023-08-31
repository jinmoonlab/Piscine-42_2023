/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:21:00 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/30 20:04:34 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putstr(char *str);
int		ft_count_line(char *buffer);
char	*ft_split_for_first_line(char *buffer);
int		count_c_in_line(char *buffer);
char	**split_for_rest_line(char *buffer, char **tab);
char	**parsing(const char *ref);
void	ft_error(void);
int		ft_len_buffer(const char *ref);
char	*parsing_for_big_buffer(const char *ref);
int		go_in(char *buffer);

#endif
