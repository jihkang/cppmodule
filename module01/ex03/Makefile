
CC = clang++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp

RM = rm -f
TARGET = human 

OBJ = $(SRC:.cpp=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CPPFLAG) $(OBJ) -o $(TARGET)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(TARGET)

re : fclean $(TARGET)

.PHONY : all clean fclean re