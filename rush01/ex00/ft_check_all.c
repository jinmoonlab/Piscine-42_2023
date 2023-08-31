/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:08:14 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/20 23:07:12 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_of_colup(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_tower;

	i = 0;
	max = 0;
	visible_tower = 0;
	if (pos / 4 == 3)
	{
		while (i <= 3)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				visible_tower++;
			}
			i++;
		}
		if (entry[pos % 4] != visible_tower)
			return (1);
	}
	return (0);
}

int	check_of_rowright(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_tower;

	i = 4;
	max = 0;
	visible_tower = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				visible_tower++;
			}
		}
		if (entry[12 + pos / 4] != visible_tower)
			return (1);
	}
	return (0);
}
