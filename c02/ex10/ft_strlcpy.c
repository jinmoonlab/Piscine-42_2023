/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:48:30 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/15 11:20:12 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < (size - 1) && size != 0))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[20];
	char 	*src;
	char dest2[20];

	src = "jeudidkla";
	printf("%d\n", ft_strlcpy(dest, src, 0));
}*/
