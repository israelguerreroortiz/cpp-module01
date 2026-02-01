# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/21 22:10:56 by iisraa11          #+#    #+#              #
#    Updated: 2026/01/21 22:21:09 by iisraa11         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

NAME = megaphone

all: $(NAME)

$(NAME): $(SRC)
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all