
CXX = c++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3

NAME = a.out 

SRC= main.cpp Span.cpp

RM = rm -f

OBJ = $(SRC:.cpp=.o)

%.o:%.cpp
	$(CXX) $(CPPFLAG) -c $< -o $@ -I.

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAG) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
