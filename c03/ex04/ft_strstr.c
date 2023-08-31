/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:39 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/15 16:06:07 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size_to_find;

	size_to_find = ft_strlen(to_find);
	i = 0;
	if (size_to_find == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] == str[i + j])
			{
				if (j == size_to_find - 1)
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	char str[] = "Jeudi";
	char to_find[] = "xd";
	printf("%s\n", strstr(argv[1], argv[2]));
	printf("%s", ft_strstr(argv[1], argv[2]));
 
}*/
