# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/22 22:54:28 by brimarti          #+#    #+#              #
#    Updated: 2026/07/22 22:54:29 by brimarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = replace
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRCS        = main.cpp Replacer.cpp
OBJS        = $(SRCS:.cpp=.o)

%.o: %.cpp Replacer.hpp
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