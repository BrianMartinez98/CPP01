# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/22 22:53:43 by brimarti          #+#    #+#              #
#    Updated: 2026/07/22 22:53:44 by brimarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = attack
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRCS        = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS        = $(SRCS:.cpp=.o)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
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