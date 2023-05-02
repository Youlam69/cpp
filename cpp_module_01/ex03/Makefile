# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 00:08:51 by ylamraou          #+#    #+#              #
#    Updated: 2023/05/02 06:28:25 by ylamraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Weapon

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		main.cpp

HEDEARS =	Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEDEARS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all