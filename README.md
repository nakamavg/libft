# DUDAS QUE ME SURGIERON A TRAVÉS DE LOS EJERCICIOS

## Funciones Resueltas

- [libft.h](libft.h)        
  - ✔️ OK  
  - *Explicación:* - Esta estructura, con #ifndef, #define y #endif, se utiliza para asegurarse de que el contenido del archivo de cabecera (libft.h) se incluya una sola vez en un programa. Evita problemas potenciales que podrían surgir si el mismo archivo se incluye más de una vez en diferentes partes del código.

	En otras palabras, este mecanismo garantiza que el código contenido en libft.h se añada al programa solo si aún no ha sido incluido previamente. Esto es importante para evitar conflictos y errores que podrían surgir al tener duplicados o superposiciones en la inclusión del archivo.	
  - *Código:* -

- [Makefile](Makefile)      
  - ✔️ OK  
  - *Explicación:* -
  - *Código:* -

- [ft_strlen](ft_strlen.c)  
  - ✔️ OK  
  - *Explicación:* La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa. El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo. 
  - *Código:* [Ver aquí](#ft_strlen-code)

- [ft_putchar_fd](ft_putchar_fd.c) 
  - ✔️ OK  
  - *Explicación:* Esta función es similar a `ft_putchar`, pero toma un descriptor de archivo (`fd`) como parámetro. En lugar de escribir automáticamente en la salida estándar, puedes elegir escribir en un descriptor de archivo obtenido de la llamada al sistema `open`, o puedes usar 0, 1 o 2 para referirte a la entrada, salida o error estándar, respectivamente. La función utiliza la función `write`, similar a `ft_putchar`, pero esta vez usa el `fd` proporcionado como el primer parámetro de `write`. Aún usamos la dirección de nuestro carácter `c` (cadena nula) como el contenido a escribir, y sabemos que escribiremos solo un carácter en nuestro descriptor de archivo deseado, por lo que usamos 1 como tamaño a escribir. 
  - *Código:* [Ver aquí](#ft_putchar_fd-code)

- [ft_isascii](ft_isascii.c) 
  - ✔️ OK  
  - *Explicación:* La elección de utilizar 127 en lugar de 177 está relacionada con la definición estándar del conjunto de caracteres ASCII.
  - *Código:* [Ver aquí](#ft_isascii-code)

- [ft_isdigit](ft_isdigit.c) 
  - ✔️ OK  
  - *Explicación:* Comprueba que sean números.
  - *Código:* [Ver aquí](#ft_isdigit-code)

- [ft_isalpha](ft_isalpha.c) 
  - ✔️ OK  
  - *Explicación:* Comprueba que sean letras.
  - *Código:* [Ver aquí](#ft_isalpha-code)

- [ft_putstr_fd](ft_putstr_fd.c) 
  - ✔️ OK  
  - *Explicación:* Imprime la cadena de caracteres en el descriptor de archivo especificado o en la salida estándar.
  - *Código:* [Ver aquí](#ft_purstr_fd-code)
  - [ft_isprint](ft_isprint.c) 
  - ✔️ OK  
  - *Explicación:* Devuelve 0 o 1 dependiendo de si lo que recibe esta dentro o fuera de los caracteres imprimibles.
  - *Código:* [Ver aquí](#ft_isprint-code)
   - [ft_isalnum](ft_isalnum.c) 
  - ✔️ OK  
  - *Explicación:* Devuelve 1 si es numero o letra y 0 si  es otra cosa.
  - *Código:* [Ver aquí](#ft_isalnum-code)


## Funciones Pendientes


| Función      | Estado      | Explicación/Código |
|--------------|-------------|---------------------|
| ft_atoi      | ❌ Pendiente | -                   |
| ft_bzero     | ❌ Pendiente | -                   |
| ft_calloc    | ❌ Pendiente | -                   |
| ft_memccpy   | ❌ Pendiente | -                   |
| ft_memchr    | ❌ Pendiente | -                   |
| ft_memcmp    | ❌ Pendiente | -                   |
| ft_memcpy    | ❌ Pendiente | -                   |
| ft_memmove   | ❌ Pendiente | -                   |
| ft_memset    | ❌ Pendiente | -                   |
| ft_strcat    | ❌ Pendiente | -                   |
| ft_strchr    | ❌ Pendiente | -                   |
| ft_strcmp    | ❌ Pendiente | -                   |
| ft_strcpy    | ❌ Pendiente | -                   |
| ft_strdup    | ❌ Pendiente | -                   |
| ft_strlcat   | ❌ Pendiente | -                   |
| ft_strncat   | ❌ Pendiente | -                   |
| ft_strncmp   | ❌ Pendiente | -                   |
| ft_strncpy   | ❌ Pendiente | -                   |
| ft_strnstr   | ❌ Pendiente | -                   |
| ft_strrchr   | ❌ Pendiente | -                   |
| ft_strstr    | ❌ Pendiente | -                   |
| ft_tolower   | ❌ Pendiente | -                   |
| ft_toupper   | ❌ Pendiente | -                   |
