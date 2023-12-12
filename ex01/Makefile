NAME		= MyAwesomePhonebook
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

SRC			= main.cpp Contact.cpp PhoneBook.cpp
OBJ			= $(SRC:.c=.o)
HEADER		= Contact.hpp PhoneBook.hpp

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re