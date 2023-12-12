SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.c=.o)

CC			=	c++

RM			=	rm -f

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

CPPFLAGS	=	-I./includes

NAME		= 	megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re
