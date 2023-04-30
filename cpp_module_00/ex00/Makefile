
NAME = megaphone

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp


OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all