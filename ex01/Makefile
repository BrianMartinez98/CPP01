# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/10 11:20:41 by brimarti          #+#    #+#              #
#    Updated: 2026/07/10 11:20:42 by brimarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp \
       zombieHorde.cpp \
       Zombie.cpp \
       newZombie.cpp \
       randomChump.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
