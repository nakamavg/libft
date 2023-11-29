# --VARIABLES--
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
LIBC		= ar -rcs
NAME		= libft.a
RM			= rm -rf
SRC			= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c ft_isspace.c
#BONUS_SRC	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
	ft_lstiter_bonus.c ft_lstmap_bonus.c
SRC_OBJ		= $(SRC:.c=.o)
#BONUS_OBJ 	= $(BONUS_SRC:.c=.o)

# --RULES--
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIBC) $(NAME) $(SRC_OBJ)

#bonus: $(BONUS_OBJ) $(SRC_OBJ)
#	$(LIBC) $(NAME) $(BONUS_OBJ) $(SRC_OBJ)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus