/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:52:05 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/17 17:20:27 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "";
	char *str2 = "";
	printf("%d\n", ft_strncmp(str, str2, 8));
	printf("%d", strncmp(str, str2, 8));
}*/
