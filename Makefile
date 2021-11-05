NAME	= libft.a

SRC	= $(wildcard *.c)

FLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.c=.o)

INCLUDE = .

HEADER = libft.h

TEST = test

CC = gcc

RM = rm -f

all: $(NAME)

test:
	$(CC) $(FLAGS) $(TEST)/$(FILE).c -L. -lft -o $(FILE).out -I $(INCLUDE)

tclean:
	$(RM) $(wildcard *.exe)
	$(RM) $(wildcard *.txt)
	$(RM) $(wildcard *.out)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

bonus: all

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I $(INCLUDE)

clean:
	$(RM) $(OBJ)

fclean: clean tclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test tclean clean fclean re