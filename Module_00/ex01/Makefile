# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 23:53:34 by yoel-idr          #+#    #+#              #
#    Updated: 2023/04/13 00:01:13 by yoel-idr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := PhoneBook
FLAGS   := -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
SRCS    := main.cpp PhoneBook.cpp
OBJS    := $(SRCS:%.cpp=%.o)

all : $(NAME)
		echo "PhoneBook [✅]"
$(NAME) : $(OBJS)
		c++ $(OBJS) -o $@
.cpp.o :
	c++ $< -o $@ 
clean   :
		@rm -f $(NAME)
		@echo "clean [✅]"

.PHONY : clean all