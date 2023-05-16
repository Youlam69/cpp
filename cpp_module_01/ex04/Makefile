# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 00:08:51 by ylamraou          #+#    #+#              #
#    Updated: 2023/05/16 05:06:23 by ylamraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = z

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -o $@ -c $<

fresh: re clean

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all