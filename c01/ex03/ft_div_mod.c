/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:28:25 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/10 13:38:57 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main()
{
	int a = 10;
	int b = 10;

	int div;
	int quot;

	ft_div_mod(a, b, &div, &quot);
	printf("div = %d, mod = %d", div, quot);
	
}*/
