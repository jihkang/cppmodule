
CC = clang++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror

SRC = PhoneBook.cpp \
		Contact.cpp

RM = rm -f
TARGET = phonebook

OBJ = $(SRC:.cpp=.o)

all : $(TARGET)

$(TARGET) :  $(OBJ)
	$(CC) $(CPPFLAG) $(OBJ) -o $(TARGET)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(TARGET)

re : fclean $(TARGET)

.PHONY : all clean fclean re