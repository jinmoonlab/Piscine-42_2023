/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:39:30 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/20 23:08:53 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int		check_entry(int ac, char **av);
int		*get_av_in_numbers(char *str);
int		check_double(int tab[4][4], int pos, int num);
int		check_of_colup(int tab[4][4], int pos, int entry[16]);
int		check_all_case(int tab[4][4], int pos, int entry[16]);
int		check_of_rowright(int tab[4][4], int pos, int entry[16]);
int		check_of_coldown(int tab[4][4], int pos, int entry[16]);
int		check_of_rowleft(int tab[4][4], int pos, int entry[16]);
int		check_all_case(int tab[4][4], int pos, int entry[16]);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
