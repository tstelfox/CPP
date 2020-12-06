# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/06 17:22:55 by tmullan       #+#    #+#                  #
#    Updated: 2020/12/06 17:23:37 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = pprogg
CXX = clang++
OBJ = main.o Peon.o Sorcerer.o Victim.o
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