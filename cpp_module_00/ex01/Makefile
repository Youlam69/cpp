
NAME = megaphone

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

HEDEARS = PhoneBook.hpp Contact.hpp 

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ) $(HEDEARS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all