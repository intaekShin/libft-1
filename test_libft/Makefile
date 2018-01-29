# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/27 15:32:02 by dhojt             #+#    #+#              #
#    Updated: 2018/01/29 17:41:18 by dhojt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmy.a

COMP = gcc -Wall -Werror -Wextra -c -o

CFIND = $(shell find ./srcs/ -maxdepth 1 -type f | grep -E "\.c$$")
CFILE = $(CFIND)
OFILE = $(notdir $(CFILE:%.c=%.o))

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

$(OBJ): $(CFILE)
	@$(MAKE) $(OFILE)

$(OFILE):
	@echo Create: $(@:obj/%=%)
	@$(COMP) $(OBJ_DIR)$@ ./srcs/$(@:%.o=%.c)

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@echo Cleaned object files

fclean: clean
	@/bin/rm -f $(NAME)
	@echo Cleaned $(NAME)

re: fclean all

.PHONY: clean flcean re
