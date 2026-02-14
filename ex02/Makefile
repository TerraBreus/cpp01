NAME = myBrain
CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp
OBJ = main.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(SRC)
	$(CPP) $(FLAGS) -c $(SRC) -o $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

