#  Defininimos el nombre del archivo de biblioteca que se va a crear
NAME = libft.a

#  Definimos el directorio donde se encuentran los archivos fuente
SRC_DIR = src

# Definimos el directorio donde se crearán los archivos objeto
OBJ_DIR = obj

# Con la función wildcard buscamos todos los archivos con la extensión .c en el directorio src
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Definimos la lista de todos los archivos objeto con la función patsbust que sirve para reemplazar el prefijo 
# $(SRC_DIR) por el sufijo $(SRC_DIR) en cada archivo fuente de la lista SRCS, Por lo tanto los archivos fuente
# en el directorio src se convertiran en archivos objeto en el directorio obj
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Definimos el directorio donde se encuentran los archivos de encabezado
INCLUDES = ./

# Definimos el compilador
CC = gcc

# Definimos las opciones para el compilado
# -Wall y -Wextra -> Para activar las advertencias de compilacion
# -Werror -> Convierte las advertencias en errores
# -I$(INCLUDES) -> indica al compilador que busque los archivos de encabezado en el directorio especificado
# -c -> Compila los archivos fuente en archivos objeto
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES) -c

# Definimos el comando para eliminar los archivos objeto, el modificador -f se utiliza para eliminar los archivos
# recursivamente
RM = rm -f

# Crea el directorio obj en caso de que no exista
$(shell mkdir -p $(OBJ_DIR))

# Compilamos cada archivo fuente (.c) en un archivo objeto (.o)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Creamos el archivo de biblioteca libft.a 
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# Compilamos todos los archivos fuente y creamos el archivo de biblioteca libft.a
all: $(NAME)

# Comando para eliminar todos los archivos objeto
clean:
	$(RM) $(OBJS)

# Comando para eliminar el archivo de biblioteca libft.a	
fclean: clean
	$(RM) $(NAME)

# Comando que vuelve a compilar todos los archivos fuente y crea el archivo de biblioteca libft.a
re: fclean all
.PHONY: all clean fclean re
