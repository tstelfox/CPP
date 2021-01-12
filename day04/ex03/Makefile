# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/06 17:22:55 by tmullan       #+#    #+#                  #
#    Updated: 2021/01/04 16:08:51 by codemuncher   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = pprogg
CXX = clang++
OBJ = main.o AMateria.o Character.o Cure.o Ice.o MateriaSource.o
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g -fno-omit-frame-pointer

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
