NAME    := ClapTrap
SRCS    := ClapTrap.cpp main.cpp
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98
HEADERS := ClapTrap.hpp

all : $(NAME)
		@echo "ClapTrap [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all