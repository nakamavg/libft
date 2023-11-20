# DUDAS QUE ME SURGIERON A TRAVES DE LOS EJERCICIOS
[libft.h](libft.h)
[Makefile](Makefile)
[ft_strlen](ft_strlen.c)
-Hay que llamar a la propia libreria para conseguir que te coja el size_t

La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa.

El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo.




# Supported functions
## Mandatory part
### Part I

- ft_atoi
- ft_bzero
- ft_calloc
- ft_isalnum
- ft_isalpha
- ft_isascii
- ft_isdigit
- ft_isprint
- ft_memccpy
- ft_memchr
- ft_memcmp
- ft_memcpy
- ft_memmove
- ft_memset
- ft_strcat
- ft_strchr
- ft_strcmp
- ft_strcpy
- ft_strdup
- ft_strlcat
- ft_strlen
- ft_strncat
- ft_strncmp
- ft_strncpy
- ft_strnstr
- ft_strrchr
- ft_strstr
- ft_tolower
- ft_toupper