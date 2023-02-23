
CC = c++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3

TARGET = amateria

SRC= main.cpp \
	AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp 

RM = rm -f

OBJ = $(SRC:.cpp=.o)

%.o:%.cpp
	$(CC) $(CPPFLAG) -c $< -o $@ -I.

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CPPFLAG) $(OBJ) -o $(TARGET)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(TARGET)

re : fclean $(TARGET)

.PHONY : all clean fclean re