# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 12:58:35 by pcervill          #+#    #+#              #
#    Updated: 2025/11/27 11:59:16 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ		= ${SRC:.cpp=.o}

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)
	@echo " \033[32m[ OK ] | $(NAME) ready! ✅\033[0m"

$(NAME):	$(OBJ)
	@echo " \033[33m[ .. ] | Compiling $(NAME)... \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@echo " \033[35m[ OK ] | $(NAME) fclean ready! 🧹\033[0m"

re:	fclean all

.PHONY:	all clean fclean re

.SILENT:	$(OBJ)