#ifndef FT_H
# define FT_H

int	check_error(char *str);
int	ft_strlen(char *str);
int	ft_strlen_to_space(char *str);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int	ft_atoi(char *str);
void	convet_to_word_3_digit(char *nb, char **tab_number, char **letter);
int	ft_strcmp(char *s1, char *s2);
char    **ft_split_ascii_numbers_dict(char *buffer);
char    **ft_split_numbers_dict(char *buffer);

#endif