# DUDAS QUE ME SURGIERON A TRAVÉS DE LOS EJERCICIOS

| **Función**             | **Estado**  | **Explicación/Código**                                     |
|-------------------------|-------------|-----------------------------------------------------------|
| [libft.h](libft.h)       | ✔️ OK        | -                                                         |
| [Makefile](Makefile)     | ✔️ OK        | -                                                         |
| [ft_strlen](ft_strlen.c) | ❌ Pendiente | - **Explicación:** La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa. El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo. <br> - **Código:** [Ver aquí](#ft_strlen-code) |

| [ft_putchar_fd](ft_putchar_fd.c)| ✔️ OK | - **Explicación y Código:** [Ver aquí](#ft_putchar_fd-code) |
| [ft_isascii](ft_isascii.c)| ✔️ OK| - **Explicación:** La elección de utilizar 127 en lugar de 177 está relacionada con la definición estándar del conjunto de caracteres ASCII. <br> - **Código:** [Ver aquí](#ft_isascii-code) |

# Supported functions
## Mandatory part
### Part I

- ft_atoi               | ❌ Pendiente
- ft_bzero              | ❌ Pendiente
- ft_calloc             | ❌ Pendiente
- ft_isalnum            | ❌ Pendiente
- ft_isalpha            | ✔️ OK
- ft_isascii            | ✔️ OK
- ft_isdigit            | ✔️ OK
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
- ft_strlen             | ✔️ OK
- ft_strncat            | ❌ Pendiente
- ft_strncmp            | ❌ Pendiente
- ft_strncpy            | ❌ Pendiente
- ft_strnstr            | ❌ Pendiente
- ft_strrchr            | ❌ Pendiente
- ft_strstr             | ❌ Pendiente
- ft_tolower            | ❌ Pendiente
- ft_toupper            | ❌ Pendiente
