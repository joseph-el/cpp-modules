NAME    := megaphone

SRCS 	:= megaphone.cpp
FLAGS   := -Wall -Wextra -Werror -std=c++98

all 	: $(NAME)
		@echo "megaphone [✅]"

$(NAME) : $(SRCS)
		@c++ $(FLAGS) $< -o $@

clean   :
		@rm -f $(NAME)
		@echo "clean [✅]"

.PHONY : clean all