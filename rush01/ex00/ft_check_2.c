/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:40:53 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/20 23:02:41 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	check_of_coldown(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_tower;

	i = 3;
	max = 0;
	visible_tower = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				visible_tower++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != visible_tower)
			return (1);
	}
	return (0);
}

int	check_of_rowleft(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_tower;

	i = 0;
	max = 0;
	visible_tower = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				visible_tower++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != visible_tower)
			return (1);
	}
	return (0);
}

int	check_all_case(int tab[4][4], int pos, int entry[16])
{
	if (check_of_rowleft(tab, pos, entry) == 1)
		return (1);
	if (check_of_rowright(tab, pos, entry) == 1)
		return (1);
	if (check_of_coldown(tab, pos, entry) == 1)
		return (1);
	if (check_of_colup(tab, pos, entry) == 1)
		return (1);
	return (0);
}
