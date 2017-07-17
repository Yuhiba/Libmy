NAME 		= libtest.a

SRC			= src/test.c

INCLDIR		= include/

OBJ			= $(SRC:.c=.o)

CC			= gcc

CFLAGS		+= -I $(INCLDIR) -Wextra -Wall -Werror -I/vagrant/lib/my/include/
CFLAGS		+= -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $@ $^
			ranlib $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re