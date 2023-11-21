# DUDAS QUE ME SURGIERON A TRAVÉS DE LOS EJERCICIOS

## Índice
- [Funciones Resueltas](#funciones-resueltas)
- [libft.h](#libfth)
- [Makefile](#makefile)
- [ft_strlen](#ft_strlen)
- [ft_putchar_fd](#ft_putchar_fd)
- [ft_isascii](#ft_isascii)
- [ft_isdigit](#ft_isdigit)
- [ft_isalpha](#ft_isalpha)
- [ft_putstr_fd](#ft_putstr_fd)
- [ft_isprint](#ft_isprint)
- [ft_isalnum](#ft_isalnum)
- [ft_tolower](#ft_tolower)
- [ft_toupper](#ft_toupper)
- [ft_strlcpy](#ft_strlcpy)
- [ft_bzero](#ft_bzero)
- [Compilación de la Biblioteca](#compilación-de-la-biblioteca)
- [Uso de la Biblioteca en un Programa](#uso-de-la-biblioteca-en-un-programa)
- [Funciones Pendientes](#funciones-pendientes)

## Funciones Resueltas

### [libft.h](libft.h)
  - ✔️ OK  
  - **Explicación:** Esta estructura, con `#ifndef`, `#define`, y `#endif`, se utiliza para asegurarse de que el contenido del archivo de cabecera (`libft.h`) se incluya una sola vez en un programa. Evita problemas potenciales que podrían surgir si el mismo archivo se incluye más de una vez en diferentes partes del código. En otras palabras, este mecanismo garantiza que el código contenido en `libft.h` se añada al programa solo si aún no ha sido incluido previamente. Esto es importante para evitar conflictos y errores que podrían surgir al tener duplicados o superposiciones en la inclusión del archivo.
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [Makefile](Makefile)      
  - ✔️ OK  
  - **Explicación:** Explicado en el código comentado.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_strlen](ft_strlen.c)  
  - ✔️ OK  
  - **Explicación:** La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa. El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_putchar_fd](ft_putchar_fd.c) 
  - ✔️ OK  
  - **Explicación:** Esta función es similar a `ft_putchar`, pero toma un descriptor de archivo (`fd`) como parámetro. En lugar de escribir automáticamente en la salida estándar, puedes elegir escribir en un descriptor de archivo obtenido de la llamada al sistema `open`, o puedes usar 0, 1 o 2 para referirte a la entrada, salida o error estándar, respectivamente. La función utiliza la función `write`, similar a `ft_putchar`, pero esta vez usa el `fd` proporcionado como el primer parámetro de `write`. Aún usamos la dirección de nuestro carácter `c` (cadena nula) como el contenido a escribir, y sabemos que escribiremos solo un carácter en nuestro descriptor de archivo deseado, por lo que usamos 1 como tamaño a escribir. 
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_isascii](ft_isascii.c) 
  - ✔️ OK  
  - **Explicación:** La elección de utilizar 127 en lugar de 177 está relacionada con la definición estándar del conjunto de caracteres ASCII.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_isdigit](ft_isdigit.c) 
  - ✔️ OK  
  - **Explicación:** Comprueba que sean números.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_isalpha](ft_isalpha.c) 
  - ✔️ OK  
  - **Explicación:** Comprueba que sean letras.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_putstr_fd](ft_putstr_fd.c) 
  - ✔️ OK  
  - **Explicación:** Imprime la cadena de caracteres en el descriptor de archivo especificado o en la salida estándar.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
 
### [ft_isprint](ft_isprint.c) 
  - ✔️ OK  
  - **Explicación:** Devuelve 0 o 1 dependiendo de si lo que recibe está dentro o fuera de los caracteres imprimibles.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_isalnum](ft_isalnum.c) 
  - ✔️ OK  
  - **Explicación:** Devuelve 1 si es número o letra y 0 si es otra cosa.
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_tolower](ft_tolower.c) 
  - ✔️ OK  
  - **Explicación:** Convierte mayúsculas en minúsculas comprobando que sea mayúscula.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_toupper](ft_toupper.c) 
  - ✔️ OK  
  - **Explicación:** Convierte minúsculas en mayúsculas comprobando que sean minúsculas.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_strlcpy](ft_strlcpy.c) 
  - ✔️ OK  
  - **Explicación:** La función `strlcpy` copia hasta `size - 1` caracteres desde la cadena de origen (`src`) a la cadena de destino (`dst`), asegurando que el final siempre acabe en null. La cadena resultante no superará `size - 1`, y si `size` es 0, no se realizará ninguna copia y devolverá el tamaño de `src`. Devuelve la longitud de la cadena de origen, es decir, el número de caracteres que habrían sido copiados si no se hubiera producido truncamiento.
  explicacion linea a  linea;

```c
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t destsize)
{
    size_t count;
    size_t i;

    // Inicialización de contadores
    count = 0;
    i = 0;

    // Verifica si los punteros son nulos
    if (!dst || !src)
        return (0);

    // Calcula la longitud de la cadena de origen
    while (src[count])
    {
        count++;
    }

    // Si destsize es menor que 1, devuelve la longitud de la cadena de origen
    if (destsize < 1)
        return (count);

    // Copia la cadena de origen a la cadena de destino
    while (src[i] && i < destsize - 1)
    {
        dst[i] = src[i];
        i++;
    }

    // Asegura que la cadena de destino esté nula-terminada
    if (destsize)
        dst[i] = '\0';

    // Devuelve la longitud de la cadena de origen
    return (count);
}

```
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_bzero](ft_bzero.c) 

  - ✔️ OK  
  - **Explicación:** se utiliza para establecer los primeros n bytes de la memoria apuntada por s a cero (es decir, establecer esos bytes en 0).;
```c

void ft_bzero(void *s, size_t n)
{
    size_t x;

    // Inicializa el contador x
    x = 0;

    // Recorre los primeros n bytes de la memoria apuntada por s
    while (x < n)
    {
        // Establece el byte actual en 0 (cero) hacemos que sea unsigned char
        ((unsigned char*)s)[x] = 0;
        // Establece el byte actual en la posición x de la memoria apuntada por s en 0 (cero). Se utiliza un casting para tratar la memoria como un array de unsigned char, asegurándose de que se establezca correctamente el byte en 0.
        // Incrementa el contador para pasar al siguiente byte
        x++;
    }
}
int main() {
    char s[10];
	
    ft_bzero(s, sizeof(s));

    int c = 0;
    while (c < sizeof(s)) {
        printf("%d ", (int)s[c]); //Necesitamos hacer el casting a entero para que salgan los 0 por pantalla
        c++;
    }

    return 0;
}

```
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)

## Compilación de la Biblioteca

1. **Makefile:**
   - Asegúrate de tener un Makefile bien configurado. Este archivo se encargará de compilar tus archivos fuente y generar la biblioteca estática.

     ```make
     libft.a: ${OBJS}
        ar rc $@ $^
     ```

2. **Comandos de Compilación:**
   - Ejecuta el comando `make` en tu terminal. Esto debería compilar tus archivos fuente y generar la biblioteca `libft.a`. Si hay errores, asegúrate de revisar los mensajes del compilador y ajusta el código según sea necesario.

## Uso de la Biblioteca en un Programa

1. **Inclusión de Encabezados:**
   - Asegúrate de incluir el archivo de encabezado `libft.h` en tus programas que utilicen funciones de la librería. Esto se hace con la siguiente línea al inicio de tu archivo fuente:

     ```c
     #include "libft.h"
     ```

2. **Enlazado con la Biblioteca:**
   - Al compilar tu programa, asegúrate de enlazarlo con la biblioteca. Esto se hace generalmente añadiendo `-L.` y `-lft` al comando de compilación. Aquí hay un ejemplo:

     ```bash
     gcc -o mi_programa mi_programa.c -L. -lft
     ```

     Esto indica al compilador buscar la biblioteca en el directorio actual (`-L.`) y enlazarla (`-lft`).

3. **Ejecución del Programa:**
   - Ahora puedes ejecutar tu programa como de costumbre.
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)

## Compilación de la Biblioteca

1. **Makefile:**
   - Asegúrate de tener un Makefile bien configurado. Este archivo se encargará de compilar tus archivos fuente y generar la biblioteca estática.

     ```make
     libft.a: ${OBJS}
        ar rc $@ $^
     ```

2. **Comandos de Compilación:**
   - Ejecuta el comando `make` en tu terminal. Esto debería compilar tus archivos fuente y generar la biblioteca `libft.a`. Si hay errores, asegúrate de revisar los mensajes del compilador y ajusta el código según sea necesario.

## Uso de la Biblioteca en un Programa

1. **Inclusión de Encabezados:**
   - Asegúrate de incluir el archivo de encabezado `libft.h` en tus programas que utilicen funciones de la librería. Esto se hace con la siguiente línea al inicio de tu archivo fuente:

     ```c
     #include "libft.h"
     ```

2. **Enlazado con la Biblioteca:**
   - Al compilar tu programa, asegúrate de enlazarlo con la biblioteca. Esto se hace generalmente añadiendo `-L.` y `-lft` al comando de compilación. Aquí hay un ejemplo:

     ```bash
     gcc -o mi_programa mi_programa.c -L. -lft
     ```

     Esto indica al compilador buscar la biblioteca en el directorio actual (`-L.`) y enlazarla (`-lft`).

3. **Ejecución del Programa:**
   - Ahora puedes ejecutar tu programa como de costumbre.
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
## Funciones Pendientes


| Función      | Estado      | Explicación/Código |
|--------------|-------------|---------------------|
| ft_atoi      | ❌ Pendiente | -                   |
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
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)