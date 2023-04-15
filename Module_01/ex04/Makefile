NAME    := replace
SRCS    := main.cpp 
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98

all : $(NAME)
		@echo "replacing every occurrence [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all