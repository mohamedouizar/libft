NAME	= libft.a

SRC	= $(wildcard *.c)
#SRC_B = $()

CFLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.c=.o)
OBJ_b = $(SRC_B:.c=.o)
INCLUDE = -I ./

HEADER = libft.h

TEST = test

CC = cc

RM = rm -f

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	

bonus: $(OBJ_b)


clean:
	$(RM) $(OBJ)

fclean: clean tclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test tclean clean fclean re