# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 00:09:03 by ylamraou          #+#    #+#              #
#    Updated: 2023/05/01 01:35:34 by ylamraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp


OBJ = $(SRC:.cpp=.o)


all: $(NAME)


$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all