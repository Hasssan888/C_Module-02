CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SERC = Fixed.cpp main.cpp used.cpp

OBJE = ${SERC:.cpp=.o}

NAME = Fixed

all: ${NAME}

${NAME}: ${OBJE}
	${CXX} ${FLAGS} -o ${NAME} ${OBJE}

%.o : %.cpp 
	${CXX} ${FLAGS} -c $< -o $@

clean: ${OBJE}
	rm -f ${OBJE}

fclean: clean
	rm -f ${NAME}

re: all clean