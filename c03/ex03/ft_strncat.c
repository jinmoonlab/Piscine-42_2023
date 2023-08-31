/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:35:46 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/15 12:58:40 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "jfewe";
	char dest[100] = "";
	char dest1[100] = "";
	printf("%s\n", ft_strncat(dest, str, 5));
	printf("%s\n", strncat(dest1, str, 5)); 
}*/
