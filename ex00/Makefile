
CC = clang++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror

SRC = megaphone.cpp
RM = rm -f
TARGET = megaphone

OBJ = $(SRC:.cpp=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CPPFLAG) $< -o $(TARGET)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(TARGET)

re : fclean $(TARGET)

.PHONY : all clean fclean re