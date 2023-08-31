/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:48:17 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/15 15:48:57 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	if (str[0] <= 'z' && str[0] >= 'a')
	{
		str[0] = str[0] - 32;
	}
	while (str[i])
	{
		if (! ((str[i] >= '0' && str[i] <= '9') 
				|| (str[i] >= 'a' && str[i] <= 'z') 
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			if ((str[i + 1] <= 'z' && str[i + 1] >= 'a'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str1 = ft_strcapitalize(str);
	printf("%s", str1);

}*/
