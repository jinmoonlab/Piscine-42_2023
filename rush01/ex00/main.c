/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:45:33 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/20 23:23:41 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	backtrack_solve(int tab[4][4], int entry[16], int pos)
{
	int	number;

	if (pos == 16)
		return (1);
	number = 1;
	while (number <= 4)
	{
		if (check_double(tab, pos, number) == 0)
		{
			tab[pos / 4][pos % 4] = number;
			if (check_all_case(tab, pos, entry) == 0)
			{
				if (backtrack_solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
		number++;
	}
	return (0);
}

void	display(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	int	*entry;
	int	tab[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	if (check_entry(ac, av) == 1)
		return (0);
	entry = get_av_in_numbers(av[1]);
	if (backtrack_solve(tab, entry, 0) == 1)
		display(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
