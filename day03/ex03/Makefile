# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 13:36:41 by tmullan       #+#    #+#                  #
#    Updated: 2020/12/04 17:54:58 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = trapper
CXX = clang++
OBJ = FragTrap.o main.o ScavTrap.o ClapTrap.o NinjaTrap.o
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