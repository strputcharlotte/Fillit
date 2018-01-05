# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/08 12:16:57 by cfarjane          #+#    #+#              #
#    Updated: 2018/01/05 19:03:31 by cfarjane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fillit
SRC 	= call_fonctions.c main.c parser.c prealgo.c read.c solver.c
FLAGS 	= -Werror -Wall -Wextra -g
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
