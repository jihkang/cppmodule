
CC = c++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror

TARGET = abstractAnimal

SRC= main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp \
	WrongAnimal.cpp \
	WrongDog.cpp \
	WrongCat.cpp 

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