/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:04:05 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/26 15:19:14 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dup;
	
	i = 0;
	while (src[i])
		i++;
	if(!(dup = malloc(sizeof(char) * i + 1)))
		return NULL;
	i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char *write_word(char *str, char *charset)
{
	int	i;
	int	j;
        char *dup;

        i = -1;
        while (str[++i])
        {
                if (is_charset(str[i], charset) == 0)
                {
                        while (is_charset(str[i], charset) == 0)
                                i++;
                        break;
                }
                i++;
        }
	j = 0;
	if(!(dup = malloc(sizeof(char) * i + 1)));
			return NULL;
	while(i < j)
        {
                dup[j] = src[j];
		j++;
        }
        dup[j] = 0;
	return (dup);
}
int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count_w;

	i = -1;
	count_w = 0;
	while (str[++i])
	{
		if (is_charset(str[i], charset) == 0)
		{
			while (is_charset(str[i], charset) == 0)
				i++;
			count_w +=1;
		}
		i++;
	}
	return (count_w);
}

char	**ft_split(char *str, char *charset)
{
	char	*strs;
	int	i;
	int	j;

	if(!(strs = malloc(sizeof(char) * ft_count_word(str, charset) + 1)));
		return NULL;
	i  = -1;
	while(++i < ft_count_word(str, charset))
	{
		strs[i] = write_word(char *str, char *charset)
}
int	main(void)
{
	printf("%d", ft_count_word("eeeeeaaaaaaaaeeeeeaaaaaaeeee", "e"));
}*/
