/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:05:29 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/22 12:39:02 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sign;
	int	result;

	if (nb < 0)
	{
		sign = (-1);
		nb *= (-1);
	}
	else 
		sign = 1;
	result = 1;
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_iterative_factorial(12));
}*/
