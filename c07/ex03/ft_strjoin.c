/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:11:48 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/26 19:09:12 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lenght(char **strs, int size, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght = lenght + ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + ft_strlen(sep) * (size - 1) + 1;
	return (lenght);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = ft_strlen(dest);
	while (src[++i])
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenght;
	char	*str;

	lenght = ft_lenght(strs, size, sep);
	str = malloc(sizeof(char) * lenght);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	if (str == NULL)
		return (NULL);
	i = -1;
	str[0] = '\0';
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (!(i == size - 1))
			ft_strcat(str, sep);
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	//char *tab[] = {"A", "Nique bien", "Ta grand mere", "zeubi"};
	char *res = ft_strjoin(argc, argv, "-_-");
	printf("%s", res);
	free(res);
}
*/
