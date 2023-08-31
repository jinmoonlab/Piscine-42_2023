#include "stdlib.h"
#include "unistd.h"
#include <fcntl.h>
#include "../includes/ft.h"

int main(int argc, char **argv)
{
    (void)argv;
    if ((argc != 2 && argc != 3 ) || check_error(argv[1]) == 0)
    {
        write(1, "Error\n", 6);
    }
    else if (argc == 2)
    {
        char **numbers_list;
        char **ascii_list;
        char buffer[4096];
        int fd = open("numbers.dict", O_RDONLY);
        read(fd, buffer, 4096);
        numbers_list = ft_split_numbers_dict(buffer);
        ascii_list = ft_split_ascii_numbers_dict(buffer);
        close(fd);
		convet_to_word_3_digit(argv[1], numbers_list, ascii_list);
    }
}