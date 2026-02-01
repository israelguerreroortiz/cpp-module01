# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 12:35:45 by iisraa11          #+#    #+#              #
#    Updated: 2026/01/24 17:08:56 by iisraa11         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp Main.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re