/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:44:22 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/16 12:50:21 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[0] == 0 && s2[0] == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "";
	char *str2 = "djsd";
	printf("%d\n", ft_strcmp(str2, str));
	printf("%d", strcmp(str2, str));
}*/
