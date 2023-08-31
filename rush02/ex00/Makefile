CC=cc
CFLAGS=-Wall -Wextra -Werror 
NAME=rush-02
SRCS= srcs/check_error.c srcs/ft_atoi.c srcs/ft_putstr.c srcs/ft_strcat.c srcs/ft_strcmp.c srcs/ft_strlen_to_space.c srcs/ft_strlen.c srcs/main.c srcs/parse.c srcs/resolver_algo.c
OBJS= $(SRCS:.c=.o)
HEADER_DIR= includes/

all: fclean compile

compile:
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

%.o: %.c
	$(CC) $(CFLAGS) -o $(NAME) -I $(HEADER_DIR) -c $< -o $@

fclean:
	rm -f $(NAME)

re: clean all
