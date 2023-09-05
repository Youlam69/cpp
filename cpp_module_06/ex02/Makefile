FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADERS :=  Base.hpp A.hpp B.hpp C.hpp
SRC 	:= main.cpp  Base.cpp
NAME	:= Base
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