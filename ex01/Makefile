NAME = ex01
GCC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(GCC) $(CFLAGS) -o $@ $^

.cpp.o :
		$(GCC) $(CFLAGS) -c -o $@ $<

clean :
		rm -rf $(OBJS)

fclean :clean
		rm -rf $(NAME)

re: clean fclean all

.PHONEY : all re clean fclean
