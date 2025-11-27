# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 17:40:37 by pcervill          #+#    #+#              #
#    Updated: 2025/11/27 11:34:07 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRC		= main.cpp Contact.cpp PhoneBook.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@echo " \033[32m[ OK ] | $(NAME) ready! ✅\033[0m"

$(NAME): $(OBJ)
	@echo " \033[33m[ .. ] | Compiling $(NAME)... \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo " \033[35m[ OK ] | $(NAME) fclean ready! 🧹\033[0m"

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJ)
