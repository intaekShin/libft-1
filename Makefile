# _*_ Makefile _*_

NAME = libft.a
COMP = gcc -Wall -Werror -Wextra -c
CFILE = test.c \
	ft_isalnum.c \
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
	ft_str_is_printable.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_bzero.c \
	ft_strdup.c \
	ft_strndup.c \
	ft_strnstr.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_itoa.c \
	ft_strnew.c \
	ft_memalloc.c \
	ft_strclr.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_memdel.c \
	ft_strdel.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_arraydelim.c \
	ft_fillarraydelim.c \
	ft_removeselect.c \
	ft_strtrimselect.c \
	ft_newarraydelimstr.c

OFILE = $(CFILE:%.c=%.o)

all: $(NAME)

$(NAME): $(OFILE)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)
	gcc $(NAME)

$(OFILE): $(CFILE)
	$(COMP) $(CFILE)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

doprint: all
	gcc -o print_temp $(NAME)
	./print_temp > result.txt
	./print_temp > ~/Desktop/result.txt
	/bin/rm -f print_temp

result: all doprint fclean

.PHONY: clean flcean re result doprint result
