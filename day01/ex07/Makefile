# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/26 11:02:18 by tmullan       #+#    #+#                  #
#    Updated: 2020/11/26 13:19:55 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace
CXX = clang++
OBJ = replace.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $^ $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all