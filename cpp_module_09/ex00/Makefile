FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADERS := BitcoinExchange.hpp
SRC 	:=  BitcoinExchange.cpp main.cpp
NAME	:= btc
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