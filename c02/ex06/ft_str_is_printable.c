/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:46 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/14 11:52:04 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((' ' > str[i] || str[i] > '~'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "\t";
	printf("%d", ft_str_is_printable(str));
}*/
