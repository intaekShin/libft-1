# _*_ Makefile _*_

NAME = libft.a

COMP = gcc -Wall -Werror -Wextra -c -o

CFIND = $(shell find . -type f | grep -E "\.c$$")
CFILE = $(notdir $(CFIND))
OFILE = $(CFILE:%.c=%.o)

OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR), $(OFILE))

all: $(OBJ_DIR) $(NAME)
	@echo MAKE COMPLETE

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo Create: Object directory

$(NAME): $(OBJ)
	@echo Create: libft.a
	@ar rc $(NAME) $(addprefix $(OBJ_DIR), $(OFILE))
	ranlib $(NAME)

$(OBJ):
	@$(MAKE) $(OFILE)

$(OFILE): $(CFILE)
	@echo Create: $(@:obj/%=%)
	@$(COMP) $(OBJ_DIR)$@ $(@:%.o=%.c)

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@echo Cleaned object files

fclean: clean
	@/bin/rm -f $(NAME)
	@echo Cleaned $(NAME)

re: fclean all

.PHONY: clean flcean re
