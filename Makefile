NAME = libft.a
COMP = gcc -Wall -Werror -Wextra
CFILE = test.c \
	ft_isalphanum.c \
	ft_strlen.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_atoi.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strstr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_strupcase.c \
	ft_strlowcase.c \
	ft_strcapitalize.c \
	ft_str_is_alpha.c \
	ft_str_is_numeric.c \
	ft_str_is_lowercase.c \
	ft_str_is_uppercase.c \
	ft_str_is_printable.c
OFILE = $(CFILE:%.c=%.o)

all:
	$(COMP) $(CFILE)
