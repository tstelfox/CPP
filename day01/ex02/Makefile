# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 13:36:41 by tmullan       #+#    #+#                  #
#    Updated: 2020/11/21 12:39:23 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = leghisti
CXX = clang++
OBJ = Zombie.o main.o ZombieEvent.o
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