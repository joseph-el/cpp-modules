NAME    := Weapon
SRCS    := HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98
HEADERS := Weapon.hpp HumanB.hpp HumanA.hpp

all : $(NAME)
		@echo "Weapon [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all