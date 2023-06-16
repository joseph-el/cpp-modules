# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 23:53:34 by yoel-idr          #+#    #+#              #
#    Updated: 2023/04/14 13:51:54 by yoel-idr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := PhoneBook
FLAGS   := -Wall -Wextra -Werror -std=c++98
SRCS    := main.cpp PhoneBook.cpp
OBJS    := $(SRCS:%.cpp=%.o)
HEADERS := PhoneBook.hpp

all : $(NAME)
		@echo "PhoneBook [✅]"
$(NAME) : $(OBJS)
		@c++ $(FLAGS) $^ -o $@
		
%.o: %.cpp $(HEADERS)
	@c++ $(CFLAGS) -o $@ -c $<
clean   : $(NAME) $(OBJS)
		@rm -f $^
		@echo "clean [✅]"

.PHONY : clean all

