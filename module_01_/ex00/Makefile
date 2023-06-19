NAME    := BraiiiiiiinnnzzzZ
SRCS    := randomChump.cpp Zombie.cpp main.cpp newZombie.cpp
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98
HEADERS := Zombie.hpp

all : $(NAME)
		@echo "BraiiiiiiinnnzzzZ [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all

