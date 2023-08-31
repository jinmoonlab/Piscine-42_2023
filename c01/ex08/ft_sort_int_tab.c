/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:09:36 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/10 22:18:00 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	id_min;

	i = 0;
	j = 0;
	while (i < size)
	{
		id_min = i;
		j = i;
		while (j < size)
		{
			if (tab[id_min] > tab[j])
			{
				ft_swap(&tab[id_min], &tab[j]);
				id_min = j;
			}
			j++;
		}
		i++;
	}
}
/*#include <stdio.h>
int main(void)
{
	int tab[] = {4, 9, 3, 4};
	ft_sort_int_tab(tab, 4);

	int i = 0;

	while (i<4)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
