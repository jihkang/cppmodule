
CXX = c++ 
CPPFLAG = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3

NAME = bureaucrat 

SRC= Bureaucrat.cpp \
	AForm.cpp \
	main.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Intern.cpp

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
	$(RM) bureman_shrubbery
re : fclean $(NAME)

.PHONY : all clean fclean re