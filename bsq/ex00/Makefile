CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_parsing.c algo_parsing.c main.c
OBJS = $(SRCS:.c=.o)
HEADER = ft.h
NAME = parsing_program

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

