CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic 

SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Contact.hpp PhoneBook.hpp

NAME = phonebook_app


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
