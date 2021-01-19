# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/16 11:38:04 by tmullan       #+#    #+#                  #
#    Updated: 2021/01/19 12:28:32 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = INPS
CXX = clang++
OBJ = main.o Bureaucrat.o Form.o
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

re: fclean all