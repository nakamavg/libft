# CREAR UNA Libreria en C

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
- [ft_strncmp](#ft_strncmp)
- [ft_memset](#ft_memset)
- [ft_memcpy](#ft_memcpy)
- [ft_atoi](#ft_atoi)
- [Compilación de la Biblioteca](#compilación-de-la-biblioteca)
- [Uso de la Biblioteca en un Programa](#uso-de-la-biblioteca-en-un-programa)
- [Funciones Pendientes](#funciones-pendientes)

## Funciones Resueltas

### [libft.h](libft.h)
  - ✔️ OK  
  - **Explicación:** 
  Las Palabras de prepocesado en este .h se ejecutaran antes del compilidor
  le estas diciendo al compilador que si no esta definada la definas y acabas el definir al final de todas las cabaceras, ahorra tiempo de trabajo por que solo va a compilar las lineas que añadas nuevas en la libreria.
  Esta estructura, con `#ifndef`, `#define`, y `#endif`, se utiliza para asegurarse de que el contenido del archivo de cabecera (`libft.h`) se incluya una sola vez en un programa. Evita problemas potenciales que podrían surgir si el mismo archivo se incluye más de una vez en diferentes partes del código. En otras palabras, este mecanismo garantiza que el código contenido en `libft.h` se añada al programa solo si aún no ha sido incluido previamente. Esto es importante para evitar conflictos y errores que podrían surgir al tener duplicados o superposiciones en la inclusión del archivo.
    
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
### [ft_strncmp](ft_strncmp.c) 

  - ✔️ OK  
  - **Explicación:** Esta función se utiliza para comparar dos cadenas hasta n caracteres .;
  Si las letras De la primera cadena son mayores devuelve un numero positivo, si son menores un 
  numero negativo y si son iguales un 0;
```c
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t x;
    unsigned char *str1;
    unsigned char *str2;

    // Inicializar variables
    x = 0;
    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;
    // hago casting a unsigned char para asegurarme que comparo byte a byte la cadena;
    // Iterar a través de las cadenas hasta el final o hasta que se comparen n caracteres
    while (str1[x] && str2[x] && (x < n - 1) && str1[x] == str2[x])
        x++;

    // Verificar si n es mayor a  0
  if (n > 0)
  //si n es mayor a 0 devuelvo la diferencia entre el primer y segundo string 
    return (str1[x] - str2[x]);
else
    return (0);
}
//main de ejemplo
int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, C!";
    size_t n = 8;

    int result = ft_strncmp(str1, str2, n);

    if (result == 0) {
        printf("Las primeras %zu letras son iguales.\n", n);
    } else if (result < 0) {
        printf("Las primeras %zu letras de la cadena \"%s\" son menores que las de la cadena \"%s\".\n", n, str1, str2);
    } else {
        printf("Las primeras %zu letras de la cadena \"%s\" son mayores que las de la cadena \"%s\".\n", n, str1, str2);
    }

    return 0;
}

```
``\`
nakama@MacBook-Air-de-David libft % ./a.out 
Las primeras 8 letras de la cadena "Hello, World!" son mayores que las de la cadena "Hello, C!".
nakama@MacBook-Air-de-David libft %
``\`

- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)

### [ft_memset](ft_memset.c) 
  - ✔️ OK  
  - **Explicación:** esta funcion lo que hace es apuntar a la direccion de memoria y la rellena con el valor que le pases por c hasta n veces, no tiene complicacion
  aclar que el bucle es contador < len y hacer casting
  a usnigned char para ir byte a byte.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
### [ft_memcpy](ft_memcpy.c)      
  - ✔️ OK  
  - **Explicación:** Como en la funcion general devolvemos un puntero a el dst declaramos dentro de la funcion nuestros unsigned char para seguir con la buena practica de comparar byte a byte gracias a hacerle un casting a los string que nos entran por cabecera.
  El objetivo de funciones como memcpy es proporcionar una operación de copia de memoria que pueda trabajar con datos de cualquier tipo. Al devolver un puntero de tipo void *, la función permite al usuario decidir el tipo de datos que se están copiando y cómo interpretar los resultados.
  - [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
  ### [ft_atoi](ft_atoi.c)      
  - ✔️ OK  
  - **Explicación:** Convertir un char a un entero .
  Para esta funcion estoy usando 2 funciones extras de mi libreria vease [ft_isspace](ft_isspace.c) y [ft_isdigit](ft_isdigit.c) queda mas legible y entendible. Para esta funcion hay que tener en cuenta que la función isspace verifica si un carácter es un espacio en blanco según la configuración de espacio en blanco en la localización actual. Esto incluye caracteres como el espacio (' '), tabulación horizontal ('\t'), retorno de carro ('\r'), avance de página ('\f'), nueva línea ('\n') ya que la funcion original que estamos imitando asi lo hace
  2147483647 es el entero positivo mas grande que entra dentro de un int 
  -2147483648 es el entero negativo mas pequeño , tendremos problemas de overflow si no lo controlamos.
  
```c

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			count;
	long int	num;
	long int	sign;

	count = 0;
	num = 0;
	sign = 1;
  ///MIENTRAS STR COUNT TENGA ESPACIOS , CORREMOS EL CONTADOR, PARA AVANZAR DE POSICION
	while (ft_isspace(str[count]))
		count++;
    ///SI EN LA POSICION ACTUAL HAY UN GUION Y EL SIGUIENTE NUMERO ESTA ENTRE EL O Y EL 9 METEMOS EL -1
    // YA QUE SI NO COMPROBAMOS QUE HAYA UN NUMERO DESPUES NO ESTAMOS HACIENDO LO QUE LA FUNCION PIDE 

	if ((str[count] == '-' ) && ft_isdigit(str[count +1]))
		sign = -1;
    //VEASE LA DIFERENCIA AQUI EL GUION NO TIENE NADA DELANTE Y HAY QUE INCLUIRLO DESPUES DE LA PRIMERA COMPROBACION
    // APROBECHAMOS EL BUCLE PARA VER SI HAY UN SIMBOLO MAS 
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (ft_isdigit(str[count]))
	{
    ///EL RESULTADO ES IGUAL A RESULTADO X 10 + CASTING DEL CHAR - EL CARACTER 0 CUALQUIER NUMERO CARACTER MENOS CERO CARACTER DA SU VALOR EN NUMERO ES DECIR
    // 1 VALE EN SU CONVERSION A DECIMAL DE ASCII 49 Y  0 VALE  48
    //49 - 48 = 1 
    //NUM = NUM * 10 + 1 = 11 
    //RECORDEMOS QUE NUM LO INICIALIZAMOS EN 0 PERO LA SIGUIENTE VEZ VALDRA 1 
    //AHORA NUM VALE UNO SI TUVIERAMOS UN 11
    //LA SIGUIENTE ITERACCION DEL WHILE SERIA
    // NUM = 1X10 +1 
		num = num * 10 + (int)(str[count] - '0');
    // CONTROL DE VALORES MAXIMO Y VALOR MINIMO PARA EVITAR OVERFLOW COMO LA FUNCION ORIGINAL
		if (num * sign > 2147483647)
			return (-1);
		if (num * sign < -2147483648)
			return (0);
		count++;
	}
	return (num * sign);
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
| ft_calloc    | ❌ Pendiente | -                   |
| ft_memccpy   | ❌ Pendiente | -                   |
| ft_memchr    | ❌ Pendiente | -                   |
| ft_memcmp    | ❌ Pendiente | -                   |
| ft_memmove   | ❌ Pendiente | -                   |
| ft_strcat    | ❌ Pendiente | -                   |
| ft_strchr    | ❌ Pendiente | -                   |
| ft_strdup    | ❌ Pendiente | -                   |
| ft_strlcat   | ❌ Pendiente | -                   |
| ft_strncat   | ❌ Pendiente | -                   |
| ft_strnstr   | ❌ Pendiente | -                   |
| ft_strrchr   | ❌ Pendiente | -                   |
| ft_strstr    | ❌ Pendiente | -                   |
- [subir](#dudas-que-me-surgieron-a-través-de-los-ejercicios)
