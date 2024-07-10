SRC = main.cpp functions.cpp

OBJ = $(SRC:.cpp=.o)

NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all