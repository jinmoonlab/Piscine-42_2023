/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlalaoui <wlalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:59:33 by wlalaoui          #+#    #+#             */
/*   Updated: 2023/08/27 11:47:45 by wlalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	code_to_return;

	code_to_return = 0;
	while (*s2 != '\0' || *s1 != '\0')
	{
		if (*s1 > *s2)
		{
			code_to_return = *s1 - *s2;
			s1++;
			s2++;
			break ;
		}
		else if (*s1 < *s2)
		{
			code_to_return = *s1 - *s2;
			s1++;
			s2++;
			break ;
		}
		s1++;
		s2++;
	}
	return (code_to_return);
}

