/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:39:34 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/10 15:32:17 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*#include <stdio.h>
int main()
{
	int a = 10;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b );
}*/
