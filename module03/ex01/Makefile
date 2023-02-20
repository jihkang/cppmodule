
CC = c++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror

SRC = ClapTrap.cpp \
	ScavTrap.cpp\
	main.cpp

RM = rm -f
TARGET = scav 

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