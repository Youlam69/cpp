
NAME = megaphone

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

HEDEARS = PhoneBook.hpp Contact.hpp 

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(HEDEARS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all