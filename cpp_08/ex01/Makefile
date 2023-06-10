NAME    := Span
SRCS    := main.cpp Span.cpp
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98
HEADERS := Span.hpp

all : $(NAME)
		@echo "Span [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all