SRC = main.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Moar_Brainnnnz

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