FLAGS	:= -Wall -Werror -Wextra -std=c++98
HEADERS := Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
SRC 	:= Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
NAME	:= AForm
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