FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADERS := PmergeMe.hpp
SRC 	:= main.cpp PmergeMe.cpp
NAME	:= PmergeMe
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