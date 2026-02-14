NAME = moarBrainz
CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = \
	  main.cpp \
	  Zombie.cpp \
	  zombieHorde.cpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
