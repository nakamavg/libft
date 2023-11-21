# Nombre de la biblioteca que se generará
NAME	=	libft.a

# Lista de archivos fuente para la biblioteca
SRCS	=	ft_strlen.c \
			ft_putchar_fd.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_putstr_fd.c \
			ft_isprint.c \
			ft_isalnum.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strlcpy.c \

# Lista de archivos de objeto generados a partir de los archivos fuente
OBJS	=	${SRCS:.c=.o}

# Directorio que contiene los archivos de encabezado
INCLUDES	=	./

# Compilador a utilizar
CC	=	gcc

# Banderas de compilación, incluyendo advertencias y el directorio de inclusión
CFLAGS	=	-Wall -Wextra -Werror -I. -c

# Comando para eliminar archivos
RM	=	rm -f

# Regla para construir archivos de objeto a partir de archivos fuente
.c.o:
	${CC} ${CFLAGS} -c $< -o $@

# Regla para construir la biblioteca a partir de archivos de objeto
${NAME}: ${OBJS}
	ar rc $@ $^

# Objetivo predeterminado que construye la biblioteca
all: ${NAME}

# Regla para eliminar archivos de objeto
clean:
	${RM} ${OBJS}

# Regla para eliminar archivos de objeto y la biblioteca
fclean: clean
	${RM} ${NAME}

# Regla para realizar una limpieza completa y reconstruir la biblioteca
re: fclean all

# Indica que los objetivos "all", "clean", "fclean", y "re" no están asociados con archivos
.PHONY: all clean fclean re
