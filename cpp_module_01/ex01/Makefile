# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 00:08:51 by ylamraou          #+#    #+#              #
#    Updated: 2023/05/16 05:04:02 by ylamraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Zombie

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	zombieHorde.cpp \
		Zombie.cpp \
		main.cpp

HEDEARS = Zombie.hpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -o $@ -c $<

fresh: re clean

$(NAME): $(OBJ) $(HEDEARS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all