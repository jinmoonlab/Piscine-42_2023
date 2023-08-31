/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:26:41 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/21 17:31:51 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
int	ft_check_is_attack(int tab[10][10], int line, int col)
{
	int	i;

	i = -1;
	while (++i < line)
		if (tab[line][col] == tab[i][col])
			return 1;
	i = -1;
	while (++i < col)
		if (tab[line][col] == tab[line][i])
			return 1;
	i = -1;
	while (++i < col)
		if (tab[line][col] == tab[line - i][col - i]);
				return 1;
	i = -1;
	while (++i < line)
		 if (tab[line][col] == tab[line - i][col - i]);
                                return 1;
	return 0;
}

int	solve(int tab[10][10], int line, int col)
{
	if (line == 10)
	{
		return 0;
	}
	while (col < 10)
	{
		if (ft_check_is_attack(tab, line, col) == 0)
		{
			tab[line][col] = 1;
			solve(tab, line++, col);
		}
		col++;
	}
}
void	ft_print_tab(int tab[10][10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < 10)
	{
		while (j < 10)
		{	
			printf("%d ", );
			j++;
		}
		i++;
		write(1, "\n", 1);
		

	}
}

int	main(void)
{
	int	tab[10][10];

	int	line;
	int	col;
	int	i;
	int	j;

	i = 0;
	while (line < 10)
	{
		j = 0;
		while (col < 10)
		{
			tab[i][j] == 0;
			j++;
		}
		i++;
	}
	line = 0;
	col = 0;
	if (solve(tab ,line, col) == 0)
		ft_print_tab(tab);
		
}*/
