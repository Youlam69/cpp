FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADERS := Bureaucrat.hpp Form.hpp
SRC 	:= Bureaucrat.cpp main.cpp Form.cpp
NAME	:= form
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