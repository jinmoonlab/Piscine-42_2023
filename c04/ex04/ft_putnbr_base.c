/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:12:33 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/17 14:41:32 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	size;
	int	i;
	int	j;

	size = ft_strlen(base);
	if (size <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		size;

	nb = nbr;
	size = ft_strlen(base);
	if (ft_check_base(base) == 1)
		return ;
	if (nb < 0)
	{
		nb = (-nb);
		write(1, "-", 1);
	}
	if (nb >= size)
	{
		ft_putnbr_base(nb / size, base);
		write(1, &base[nb % size], 1);
	}
	else
	{
		write(1, &base[nb % size], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
}*/
