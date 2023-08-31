#include "stdlib.h"
#include "unistd.h"
#include <fcntl.h>
#include "../includes/ft.h"

int count_lines(char *str)
{
    int i;

    i = 1;
    while (*str != '\0')
    {
        if (*str == '\n')
            i++;
        str++;
    }
    return (i);
}

void    fill_string(char *to_fill, char *str_to_add, int how_many_to_add)
{
    int i;

    i = 0;
    while (*str_to_add != '\0' && i < how_many_to_add)
    {
        *to_fill = *str_to_add;
        str_to_add++;
        to_fill++;
        i++;
    }
    *to_fill = '\0';
}

//si erreur de malloc, retourner NULL
char    **ft_split_numbers_dict(char *buffer)
{
    char **splited_dict;
    int j;

    splited_dict = malloc((sizeof(char *) * count_lines(buffer)) + sizeof(char *));
    if (!splited_dict)
        return (NULL);
    j = 0;
    while (*buffer != '\0')
    {
        if (*buffer >= '0' && *buffer <= '9')
        {
            splited_dict[j] = malloc((sizeof(char) * ft_strlen_to_space(buffer)) + sizeof(char));
            if (!splited_dict[j])
                return (NULL);
            fill_string(splited_dict[j], buffer, ft_strlen_to_space(buffer));
            buffer += ft_strlen_to_space(buffer);
            j++;
        }
        buffer++;
    }
    splited_dict[j] = 0;
    return (splited_dict);
}

char    **ft_split_ascii_numbers_dict(char *buffer)
{
    char **splited_dict;
    int j;

    splited_dict = malloc((sizeof(char *) * count_lines(buffer)) + sizeof(char *));
    if (!splited_dict)
        return (NULL);
    j = 0;
    while (*buffer != '\0')
    {
        if (*buffer >= 32 && *buffer <= 126 && *buffer != ':' && *buffer != '\n' && *buffer != ' ' && (!(*buffer >= '0' && *buffer <= '9')))
        {
            splited_dict[j] = malloc((sizeof(char) * ft_strlen_to_space(buffer)) + sizeof(char));
            if (!splited_dict[j])
                return (NULL);
            fill_string(splited_dict[j], buffer, ft_strlen_to_space(buffer));
            buffer += ft_strlen_to_space(buffer);
            j++;
        }
        buffer++;
    }
    splited_dict[j] = 0;
    return (splited_dict);
}
