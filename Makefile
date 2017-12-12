# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/08 12:16:57 by cfarjane          #+#    #+#              #
#    Updated: 2017/12/12 15:39:15 by emoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fillit
SRC 	= read.c prealgo.c main.c
FLAGS 	= -Werror -Wall -Wextra
CC 		= gcc

OBJ = $(SRC:.c=.o)
	CL=\x1b[35m
	GREEN=\033[1;32m
	RED=\033[1;31m
	CL2=\x1b[36m
	NC=\033[0m

%.o: %.c
		@$(CC) -c $< -o $@ $(FLAGS)

all:  $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)[✓]$(NC)$(CL) Objects of libft compiled$(NC)"
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -I libft/ -L libft/ -lft
	@echo "$(GREEN)[✓]$(NC)$(CL) executable $(NAME) built$(NC)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)[-]$(NC)$(CL2) Objects of $(NAME) cleaned"

fclean: clean
	@rm -rf fillit
	@echo "$(RED)[-]$(NC)$(CL2) Library $(NAME) cleaned"

re: fclean all
