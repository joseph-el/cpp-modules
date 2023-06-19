NAME    := Account
FLAGS   := -Wall -Wextra -Werror -std=c++98
SRCS    := Account.cpp Account.cpp tests.cpp
OBJS    := $(SRCS:%.cpp=%.o)
HEADERS := Account.hpp

all : $(NAME)
		@echo "Account [✅]"
$(NAME) : $(OBJS)
		@c++ $(FLAGS) $^ -o $@
		
%.o: %.cpp $(HEADERS)
	@c++ $(CFLAGS) -o $@ -c $<
clean   : $(NAME) $(OBJS)
		@rm -f $^
		@echo "clean [✅]"

.PHONY : clean all