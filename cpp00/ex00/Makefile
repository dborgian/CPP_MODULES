NAME = megaphone

SRCS = megaphone.cpp \

OBJS = $(SRCS:.cpp=.o)

CPP = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
