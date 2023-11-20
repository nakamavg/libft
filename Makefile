NAME	=	libft.a

SRCS	=	ft_strlen.c \
			
OBJS		= ${SRCS:.c=.o}
INCLUDES	=./
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I. -c
RM			= rm -f
.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}
clean:
			${RM} ${OBJS} 
fclean:		clean
			${RM} ${NAME}
re:			fclean all
.PHONY:		all clean fclean re