# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 23:53:34 by yoel-idr          #+#    #+#              #
#    Updated: 2023/04/13 21:44:32 by yoel-idr         ###   ########.fr        #
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
clean   :
		@rm -f $(NAME)
		@echo "clean [✅]"

.PHONY : clean all

