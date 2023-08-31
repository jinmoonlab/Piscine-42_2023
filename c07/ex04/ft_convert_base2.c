/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:28:35 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/26 19:13:45 by fsulvac          ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-' 
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;

	if (ft_check_base(base) == 1)
		return (0);
	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_check_in_base(str[i], base) != -1)
	{
		result = ft_check_in_base(str[i], base) + result * ft_strlen(base);
		i++;
	}
	return (result * sign);
}
