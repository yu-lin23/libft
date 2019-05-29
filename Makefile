NAME = libft.a

SRC = ft_putchar.c \
	  ft_putstr.c

FLAGS = -Wall -Werror -Wextra

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
