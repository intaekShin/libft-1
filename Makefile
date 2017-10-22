NAME = libft.a
COMP = gcc -Wall -Werror -Wextra
CFILE = main.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_atoi.c \
	ft_strcpy.c

all:
	$(COMP) $(CFILE)
