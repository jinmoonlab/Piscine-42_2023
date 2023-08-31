/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:12:36 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/26 13:06:02 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dup;
	int	i;

	dup = NULL;
	dup = malloc(sizeof(int) * (max - min));
	if (dup == NULL || min >= max)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		dup[i] = i + min;
		i++;
	}
	return (dup);
}
/*
int	main(void)
{
	int	min = 1;
	int	max = 1004;
	int	i;
	int *tab = ft_range(min, max);
	for(i = 0; i <  max - min; i++)
	{
		printf("%d\n", tab[i]);
	}
}*/
