NAME = Fixed 

CXXFLAGS = -Wall -Wextra -Werror 

CC = c++ 

STD = -std=c++98 

SRC = Fixed.cpp main.cpp 

INC = Fixed.hpp 

OBJ = $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@ 

fresh : all clean

clean :
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME) 

re : fclean all 

fresh : all clean

.PHONY : all clean fclean re
