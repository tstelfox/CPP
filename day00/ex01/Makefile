# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 13:36:41 by tmullan       #+#    #+#                  #
#    Updated: 2020/11/15 18:41:10 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = yellowpages
CXX = g++
OBJ = megaphone.o
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