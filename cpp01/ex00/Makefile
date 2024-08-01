SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all