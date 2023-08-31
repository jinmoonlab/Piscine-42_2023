/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:19:40 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/10 16:59:01 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_2_digit(int nb)
{
	if (nb >= 10)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(48);
		ft_putchar(nb + '0');
	}
}

void	ft_use(int i, int j)
{
	ft_print_2_digit(i);
	write (1, " ", 1);
	ft_print_2_digit(j);
	if (!(i == 98 && j == 99))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_use(i, j);
			j++;
		}
		i++;
	}
}
/*
int main()
{
	ft_print_comb2();
	write(1,"\n",1);
	ft_print_2_digit(0);
}*/
