# DUDAS QUE ME SURGIERON A TRAVES DE LOS EJERCICIOS
[libft.h](libft.h)
[Makefile](Makefile)
[ft_strlen](ft_strlen.c)
-Hay que llamar a la propia libreria para conseguir que te coja el size_t

La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa.

El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo.
[ft_putchar_fd](ft_putchar_fd.c)
 * Esta función es similar a ft_putchar, pero toma un descriptor de archivo (fd)
 * como parámetro. En lugar de escribir automáticamente en la salida estándar,
 * puedes elegir escribir en un descriptor de archivo obtenido de la llamada
 * al sistema open, o puedes usar 0, 1 o 2 para referirte a la entrada,
 * salida o error estándar, respectivamente. La función utiliza la función
 * write, similar a ft_putchar, pero esta vez usa el fd proporcionado como el
 * primer parámetro de write. Aún usamos la dirección de nuestro carácter c
 * (cadena nula) como el contenido a escribir, y sabemos que escribiremos
 * solo un carácter en nuestro descriptor de archivo deseado, por lo que usamos
 * 1 como tamaño a escribir. */
-[ft_isascii](ft_isascii.c)
 /*
La elección de utilizar 127 en lugar de 177 en la función ft_isascii está relacionada con la definición estándar del conjunto de caracteres ASCII.

El conjunto de caracteres ASCII utiliza códigos numéricos del 0 al 127 (7 bits). En este rango, se encuentran los caracteres básicos del inglés, como letras, números y algunos símbolos. Fuera de este rango, es común encontrar conjuntos de caracteres extendidos o caracteres especiales que dependen del conjunto de caracteres específico que esté en uso (por ejemplo, ISO-8859-1 o UTF-8). */

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