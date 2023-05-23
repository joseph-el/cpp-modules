NAME    := Form
SRCS    := main.cpp Bureaucrat.cpp Form.cpp
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98
HEADERS := Bureaucrat.hpp Form.hpp

all : $(NAME)
		@echo "Form [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all