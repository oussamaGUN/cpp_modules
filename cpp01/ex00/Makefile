SRC = main.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

NAME = BraiiiiiiinnnzzzZ

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