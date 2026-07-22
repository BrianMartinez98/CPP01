# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/22 22:52:00 by brimarti          #+#    #+#              #
#    Updated: 2026/07/22 22:52:01 by brimarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = horde
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRCS        = main.cpp Zombie.cpp zombieHorde.cpp
OBJS        = $(SRCS:.cpp=.o)

%.o: %.cpp Zombie.hpp  
	$(CXX) $(CXXFLAGS) -c $< -o $@

all:        $(NAME)

$(NAME):    $(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
			$(RM) $(OBJS)

fclean:     clean
			$(RM) $(NAME)

re:         fclean all

.PHONY:     all clean fclean re