/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:29:33 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/26 19:20:00 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	len_int(int nb)
{
	int	i;

	i = 0;
	while (nb >= 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

void	ft_write_in_str(char *str, int nb, char *base_to, int i)
{
	long	nbr;
	int		size;

	size = ft_strlen(base_to);
	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		str[i] = '-';
		i++;
	}
	if (nbr >= size)
	{
		str[i] = base_to[nbr % size];
		ft_write_in_str(str, nbr / size, base_to, i + 1);
	}
	else 
	{
		str[i] = base_to[nb % size];
		str[++i] = '\0';
	}
}

void	ft_revv(char *str)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}

void	ft_revv_neg(char *str)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		tmp = str[i + 1];
		str[i + 1] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		len_nb;
	char	*str;
	int		i;

	i = 0;
	if (ft_check_base(base_from) || ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	len_nb = len_int(nb);
	str = malloc(sizeof (char) * len_nb + 1);
	if (str == NULL)
		return (NULL);
	ft_write_in_str(str, nb, base_to, i);
	if (nb < 0)
		ft_revv_neg(str);
	else 
		ft_revv(str);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_convert_base("01010","01", "0123456789"));
}*/
