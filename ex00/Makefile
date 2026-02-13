NAME = brainz
CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = \
	  main.cpp \
	  Zombie.cpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
