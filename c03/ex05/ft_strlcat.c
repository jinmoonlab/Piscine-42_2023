/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:58:11 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/17 17:50:09 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size_dest >= size)
		return (size_src + size);
	i = 0;
	while (src[i] && (i + size_dest < size - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_src + size_dest);
}
/*#include <stdio.h>
#include <bsd/string.h>

int				main(void)
{	char			dest[10] = "fk";
	char 			des[10] = "fk";
	char			src[50] = "dec";
	unsigned int	size;

	size = -1;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	printf("%ld\n", strlcat(des, src, size));
	printf("%s\n", des);
}*/
