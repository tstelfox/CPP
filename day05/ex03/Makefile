# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/16 11:38:04 by tmullan       #+#    #+#                  #
#    Updated: 2021/01/23 15:43:04 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = INPS
CXX = clang++
OBJ = main.o Bureaucrat.o Form.o PresidentialPardonForm.o RobotomyRequestForm.o \
		ShrubberyCreationForm.o Intern.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $^ $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all