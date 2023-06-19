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
