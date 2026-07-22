#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/09 12:32:08 by vruiz-ru          #+#    #+#              #
#    Updated: 2026/06/16 13:30:27 by vruiz-ru         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

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