CC = c++

NAME = program

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp ./Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : clean all