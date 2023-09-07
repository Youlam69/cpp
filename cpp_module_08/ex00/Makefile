FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADERS := easyfind.hpp
SRC 	:= main.cpp
NAME	:= easyfind
OBJ		:= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	
fclean : clean
	rm -rf $(NAME)
	
re : fclean all

.PHONY: all clean fclean re