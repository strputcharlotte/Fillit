# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/08 12:16:57 by cfarjane          #+#    #+#              #
#    Updated: 2017/12/08 15:13:13 by cfarjane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a
SRC = 
FLAGS = -Werror -Wall -Wextra
CC = gcc $(FLAGS)

OBJ = $(SRC:.c=.o)
	CL=\x1b[35m
	GREEN=\033[1;32m
	RED=\033[1;31m
	CL2=\x1b[36m
	NC=\033[0m

all:  $(NAME)

$(NAME):
	@echo "$(GREEN)[✓]$(NC)$(CL) Objects of $(NAME) compiled$(NC)"
	@$(CC) -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@RANLIB $(NAME)
	@echo "$(GREEN)[✓]$(NC)$(CL) library $(NAME) built$(NC)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)[-]$(NC)$(CL2) Objects of $(NAME) cleaned"

fclean: clean
	@rm -rf fillit.a
	@echo "$(RED)[-]$(NC)$(CL2) Library $(NAME) cleaned"

re: fclean all
