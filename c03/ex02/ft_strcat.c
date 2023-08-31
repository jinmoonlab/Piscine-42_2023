/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:58:44 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/15 11:58:08 by fsulvac          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "";
	char dest[100] = "";
	char dest1[100] = "";
	printf("%s\n", strcat(dest1, str));
	printf("%s\n", ft_strcat(dest, str));
}*/
