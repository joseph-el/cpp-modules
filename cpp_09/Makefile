NAME    := BitcoinExchange
SRCS    := main.cpp BitcoinExchange.cpp
OBJS    := $(SRCS:%.cpp=%.o)
FLAGS   := -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
HEADERS := BitcoinExchange.hpp

all : $(NAME)
		@echo "BitcoinExchange [✅]"

$(NAME) : $(OBJS)	
		@c++ $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
		@c++ $(FLAGS) -c $< -o $@

clean :	$(OBJS) $(NAME)
		@rm -f $^ 
		@echo "Clean [✅]"

.PHONY : clean all