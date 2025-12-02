CC = c++

NAME = harlFilter

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wno-implicit-fallthrough

SRC = ./main.cpp ./Harl.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp ./Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : clean all