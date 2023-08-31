#include "../includes/ft.h"

int	ft_search(char *nb, char *tab_number[])
{
	int	i;
	
	i = 0;
	while (tab_number[i])
	{
		if (ft_strcmp(tab_number[i], nb) == 0)
			return (i);
		i++;
	}
	return (-1);
}


void	convet_to_word_3_digit(char *nb, char *tab_number[], char *letter[])
{
	unsigned int	n;
	unsigned int	hun;
	unsigned int	dec;

	n = ft_atoi(nb);

	if(n >= 1 && n <= 999)
	{
		hun = n / 100;
		dec = n % 100;
		if (hun > 0)
		{
			ft_putstr(letter[hun]);
		}
		if (dec <= 20)
		{
			ft_putstr(letter[dec]);
		}
		else 
		{
			ft_putstr(letter[ft_search(nb, tab_number)]);
			ft_putstr(letter[ft_search(nb, tab_number)]);
		}
	}
}
