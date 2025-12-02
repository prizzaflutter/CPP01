CC = c++

NAME = program

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ./main.cpp ./Weapon.cpp ./HumanA.cpp ./HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp ./HumanA.hpp ./HumanB.hpp ./Weapon.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : clean all