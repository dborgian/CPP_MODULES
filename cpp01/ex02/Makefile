CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

NAME = Hi


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean