# DUDAS QUE ME SURGIERON A TRAVÉS DE LOS EJERCICIOS

| **Función**             | **Estado**  | **Explicación/Código**                                     |
|-------------------------|-------------|-----------------------------------------------------------|
| [libft.h](libft.h)       | ✔️ OK        | -                                                         |
| [Makefile](Makefile)     | ✔️ OK        | -                                                         |
| [ft_strlen](ft_strlen.c) | ✔️ OK   | - **Explicación:** La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa. El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo. <br> - **Código:** [Ver aquí](#ft_strlen-code) |

| [ft_putchar_fd](ft_putchar_fd.c)| ✔️ OK| - **Explicación:** Esta función es similar a `ft_putchar`, pero toma un descriptor de archivo (`fd`) como parámetro. En lugar de escribir automáticamente en la salida estándar, puedes elegir escribir en un descriptor de archivo obtenido de la llamada al sistema `open`, o puedes usar 0, 1 o 2 para referirte a la entrada, salida o error estándar, respectivamente. La función utiliza la función `write`, similar a `ft_putchar`, pero esta vez usa el `fd` proporcionado como el primer parámetro de `write`. Aún usamos la dirección de nuestro carácter `c` (cadena nula) como el contenido a escribir, y sabemos que escribiremos solo un carácter en nuestro descriptor de archivo deseado, por lo que usamos 1 como tamaño a escribir. <br> - **Código:** [Ver aquí](#ft_putchar_fd-code) |

| [ft_isascii](ft_isascii.c)| ✔️ OK| - **Explicación:** La elección de utilizar 127 en lugar de 177 está relacionada con la definición estándar del conjunto de caracteres ASCII. <br> - **Código:** [Ver aquí](#ft_isascii-code) |
| [ft_isdigit](ft_isdigit.c)| ✔️ OK| - **Explicación:** Comprueba que sean numeros <br> - **Código:** [Ver aquí](#ft_isdigit-code) 
| [ft_isalpha](ft_isalpha.c)| ✔️ OK| - **Explicación:** Comprueba que sean letras <br> - **Código:** [Ver aquí](#ft_isalpha-code) 
| [ft_putstr_fd](ft_putstr_fd.c)| ✔️ OK| - **Explicación:**   - Imprime la cadena de caracteres en el descriptor de archivo especificado o en la salida estandar.
<br> - **Código:** [Ver aquí](#ft_purstr_fd-code) 

# Supported functions
## Mandatory part
### Part I

- ft_atoi               | ❌ Pendiente
- ft_bzero              | ❌ Pendiente
- ft_calloc             | ❌ Pendiente
- ft_isalnum            | ❌ Pendiente
- ft_isprint            | ❌ Pendiente
- ft_memccpy            | ❌ Pendiente
- ft_memchr             | ❌ Pendiente
- ft_memcmp             | ❌ Pendiente
- ft_memcpy             | ❌ Pendiente
- ft_memmove            | ❌ Pendiente
- ft_memset             | ❌ Pendiente
- ft_strcat             | ❌ Pendiente
- ft_strchr             | ❌ Pendiente
- ft_strcmp             | ❌ Pendiente
- ft_strcpy             | ❌ Pendiente
- ft_strdup             | ❌ Pendiente
- ft_strlcat            | ❌ Pendiente
- ft_strncat            | ❌ Pendiente
- ft_strncmp            | ❌ Pendiente
- ft_strncpy            | ❌ Pendiente
- ft_strnstr            | ❌ Pendiente
- ft_strrchr            | ❌ Pendiente
- ft_strstr             | ❌ Pendiente
- ft_tolower            | ❌ Pendiente
- ft_toupper            | ❌ Pendiente
