NAME			=	convert
CC				=	c++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM				=	rm -rf
SRCS			=	./main.cpp ./check_type.cpp ./convert_to_types.cpp
OBJS 			=	${SRCS:.cpp=.o}

.cpp.o:
					$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
				 	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
					$(RM) ${OBJS}

fclean			:	clean
					$(RM) $(NAME)

re				: 	fclean all

.PHONY: 		all fclean clean re
