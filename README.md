# CREAR UNA Libreria en C

## Índice
- [CREAR UNA Libreria en C](#crear-una-libreria-en-c)
  - [Índice](#índice)
    - [libft.h](#libft)
    - [Makefile](#makefile)
    ### Primera Parte Obligatoria
      - [`ft_strlen`](#ft_strlen)
      - [`ft_isascii`](#ft_isascii)
      - [`ft_isdigit`](#ft_isdigit)
      - [`ft_isalpha`](#ft_isalpha)
      - [`ft_isprint`](#ft_isprint)
      - [`ft_isalnum`](#ft_isalnum)
      - [`ft_tolower`](#ft_tolower)
      - [`ft_toupper`](#ft_toupper)
      - [`ft_strlcpy`](#ft_strlcpy)
      - [`ft_bzero`](#ft_bzero)
      - [`ft_strncmp`](#ft_strncmp)
      - [`ft_memset`](#ft_memset)
      - [`ft_memcpy`](#ft_memcpy)
      - [`ft_memccpy`](#ft_memccpy)
      - [`ft_atoi`](#ft_atoi)
      - [`ft_memchar`](#ft_memchar)
      - [`ft_memmove`](#ft_memmove)
      - [`ft_memcmp`](#ft_memcmp)
      - [`ft_strchr` y `ft_strrchr`](#ft_strchr-y-ft_strrchr)
- [Implementación de la función `memmove` en C](#implementación-de-la-función-memmove-en-c)
- [Verificación de Superposición de Regiones de Memoria](#verificación-de-superposición-de-regiones-de-memoria)
  - [`ft_memcmp`](#ft_memcmp)
  - [`ft_strnstr`](#ft_strnstr)
  - [`ft_calloc`](#ft_calloc)
  - [`ft_strdup`](#ft_strdup)
    ### Segunda Parte Obligatoria
    - [`ft_substr`](#ft_substr)
    - [`ft_putstr_fd`](#ft_putstr_fd)
    - [`ft_putchar_fd`](#ft_putchar_fd)
    - [`ft_putendl_fd`](#ft_putendl_fd)
    - [`ft_putnbr_fd`](#ft_putnbr_fd)
    - [`ft_strjoin`](#ft_strjoin)
    - [`ft_strtrim`](#ft_strtrim)
    - [`ft_strsplit`](#ft_strsplit)
    - [`ft_itoa`](#ft_itoa)
    - [`ft_strmapi`](#ft_strmapi)
    - [`ft_striteri`](#ft_striteri)
    ### Bonus Linked List
    - [Linked list](#declarar-una-linked-list)
    - [Mis problemas con las listas](#mis-idas-y-venidas-con-las-listas)
      - [`ft_lstnew`](#ft_lstnew)
      - [`ft_lstadd_front`](#ft_lstadd_front)
      - [`ft_lstsize`](#ft_lstsize)
      - [`ft_lstlast`](#ft_lstlast)
      - [`ft_lstdelone`](#ft_lstdelone)
      - [`ft_lstclear`](#ft_lstclear) 
      - [`ft_lstiter`](#ft_lstiter)
      - [`ft_lstmap`](#ft_lstmap) 
    ### Problemas / Soluciones / Conclusiones listas
      - [Problemas que me encontre en mi programa main para testear estas funciones](#problemas-que-me-encontre-en-mi-programa-main-para-testear-estas-funciones)
      - [Caso 1: Borramos `node`](#caso-1-borramos-node)
      - [Caso 2: Borramos `node2`](#caso-2-borramos-node2)
      - [Caso 3: Borramos `node3`](#caso-3-borramos-node3)
      - [Conclusiones De las listas](#conclusiones-de-las-listas)
      - [Resumen Final Listas](#lo-que-he-sacado-de-todo-esto-despues-de-ft_lstadd_back-ft_lstadd_frontft_lstlastft_lstdeloneft_lstnewft_lstsizeft_lstclear)
  - [Compilación de la Biblioteca](#compilación-de-la-biblioteca)
  - [Uso de la Biblioteca en un Programa](#uso-de-la-biblioteca-en-un-programa)
  - [Compilación de la Biblioteca](#compilación-de-la-biblioteca-1)
  - [Uso de la Biblioteca en un Programa](#uso-de-la-biblioteca-en-un-programa-1)
  - [Funciones Pendientes](#funciones-pendientes)

### [libft.h](libft.h)
  - ✔️ OK  
  - **Explicación:** 
  Las Palabras de prepocesado en este .h se ejecutaran antes del compilidor
  le estas diciendo al compilador que si no esta definada la definas y acabas el definir al final de todas las cabaceras, ahorra tiempo de trabajo por que solo va a compilar las lineas que añadas nuevas en la libreria.
  Esta estructura, con `#ifndef`, `#define`, y `#endif`, se utiliza para asegurarse de que el contenido del archivo de cabecera (`libft.h`) se incluya una sola vez en un programa. Evita problemas potenciales que podrían surgir si el mismo archivo se incluye más de una vez en diferentes partes del código. En otras palabras, este mecanismo garantiza que el código contenido en `libft.h` se añada al programa solo si aún no ha sido incluido previamente. Esto es importante para evitar conflictos y errores que podrían surgir al tener duplicados o superposiciones en la inclusión del archivo.
    
- [subir](#Índice)
### [Makefile](Makefile)      
  - ✔️ OK  
  - **Explicación:** Explicado en el código comentado.
  - ACTUALIZACION GRACIAS A LA AYUDA DE 
  - [Ivan Varela](https://github.com/ivarela77?tab=stars)
  - [subir](#índice)
### [ft_strlen](src/ft_strlen.c)  
  - ✔️ OK  
  - **Explicación:** La función `strlen` en C devuelve un valor de tipo `size_t` porque está diseñada para representar tamaños de objetos en bytes. `size_t` es un tipo entero sin signo que puede almacenar el tamaño máximo posible de un objeto en la plataforma en la que se está ejecutando el programa. El uso de `size_t` como tipo de retorno de `strlen` permite que la función pueda manejar correctamente tamaños grandes de cadenas de caracteres. Además, al ser un tipo sin signo, `size_t` puede representar tamaños de objetos mayores que los tipos de datos con signo, ya que no se desperdicia un bit para representar el signo.
  - [subir](#índice)
### [ft_putchar_fd](src/ft_putchar_fd.c) 
  - ✔️ OK  
  - **Explicación:** Esta función es similar a `ft_putchar`, pero toma un descriptor de archivo (`fd`) como parámetro. En lugar de escribir automáticamente en la salida estándar, puedes elegir escribir en un descriptor de archivo obtenido de la llamada al sistema `open`, o puedes usar 0, 1 o 2 para referirte a la entrada, salida o error estándar, respectivamente. La función utiliza la función `write`, similar a `ft_putchar`, pero esta vez usa el `fd` proporcionado como el primer parámetro de `write`. Aún usamos la dirección de nuestro carácter `c` (cadena nula) como el contenido a escribir, y sabemos que escribiremos solo un carácter en nuestro descriptor de archivo deseado, por lo que usamos 1 como tamaño a escribir. 
  - [subir](#índice)
### [ft_isascii](src/ft_isascii.c) 
  - ✔️ OK  
  - **Explicación:** La elección de utilizar 127 en lugar de 177 está relacionada con la definición estándar del conjunto de caracteres ASCII.
  - [subir](#índice)
### [ft_isdigit](src/ft_isdigit.c) 
  - ✔️ OK  
  - **Explicación:** Comprueba que sean números.
  - [subir](#Índice)
### [ft_isalpha](src/ft_isalpha.c) 
  - ✔️ OK  
  - **Explicación:** Comprueba que sean letras.
  - [subir](#Índice)
### [ft_putstr_fd](src/ft_putstr_fd.c) 
  - ✔️ OK  
  - **Explicación:** Imprime la cadena de caracteres en el descriptor de archivo especificado o en la salida estándar.
  - [subir](#Índice)
 
### [ft_isprint](src/ft_isprint.c) 
  - ✔️ OK  
  - **Explicación:** Devuelve 0 o 1 dependiendo de si lo que recibe está dentro o fuera de los caracteres imprimibles.
  - [subir](#Índice)
### [ft_isalnum](src/ft_isalnum.c) 
  - ✔️ OK  
  - **Explicación:** Devuelve 1 si es número o letra y 0 si es otra cosa.
- [subir](#Índice)
### [ft_tolower](src/ft_tolower.c) 
  - ✔️ OK  
  - **Explicación:** Convierte mayúsculas en minúsculas comprobando que sea mayúscula.
  - [subir](#Índice)
### [ft_toupper](src/ft_toupper.c) 
  - ✔️ OK  
  - **Explicación:** Convierte minúsculas en mayúsculas comprobando que sean minúsculas.
  - [subir](#Índice)
### [ft_strlcpy](src/ft_strlcpy.c) 
  - ✔️ OK  
  - **Explicación:** La función `strlcpy` copia hasta `size - 1` caracteres desde la cadena de origen (`src`) a la cadena de destino (`dst`), asegurando que el final siempre acabe en null. La cadena resultante no superará `size - 1`, y si `size` es 0, no se realizará ninguna copia y devolverá el tamaño de `src`. Devuelve la longitud de la cadena de origen, es decir, el número de caracteres que habrían sido copiados si no se hubiera producido truncamiento.
  explicacion linea a  linea;

```c
#include "../libft.h"
ERROR DEPURADO GRACIAS A LOS TESTERS DE WARMACHINE 
TE QUIERO WARMACHINE
// size_t ft_strlcpy(char *dst, const char *src, size_t destsize)
// {
//     size_t count;
//     size_t i;

//     // Inicialización de contadores
//     count = 0;
//     i = 0;

//     // Verifica si los punteros son nulos
//     if (!dst || !src)
//         return (0);

//     // Calcula la longitud de la cadena de origen
//     while (src[count])
//     {
//         count++;
//     }

//     // Si destsize es menor que 1, devuelve la longitud de la cadena de origen
//     if (destsize < 1)
//         return (count);

//     // Copia la cadena de origen a la cadena de destino
//     while (src[i] && i < destsize - 1)
//     {
//         dst[i] = src[i];
//         i++;
//     }

//     // Asegura que la cadena de destino esté nula-terminada
//     if (destsize)
//         dst[i] = '\0';

//     // Devuelve la longitud de la cadena de origen
//     return (count);
// }
```c
#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	count;
	size_t	i;

	i = 0;
  //Gracias a Enterarme en el atoi
  //De que puedo usar funciones propias de la libreria
  //que estamos construllendo Implementamos ft_strlen
  // y me estaba dando un error que subsane gracias a la war machine
  // aqui corregido
	count = ft_strlen(src);
	if (destsize > 0)
	{
		while (src[i] && i < destsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (count);
}
```
- [subir](#Índice)
### [ft_bzero](src/ft_bzero.c) 

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
- [subir](#Índice)
### [ft_strncmp](src/ft_strncmp.c) 

  - ✔️ OK  
  - **Explicación:** Esta función se utiliza para comparar dos cadenas hasta n caracteres .;
  Si las letras De la primera cadena son mayores devuelve un numero positivo, si son menores un 
  numero negativo y si son iguales un 0;
```c
    #include "../libft.h"

  int	ft_strncmp(const char *s1, const char *s2, size_t n)
      {
        size_t	x;

        x = 0;
        //comprobacion que n sea 0 
        if (n == 0)
          return (0);
        //Aqui validamos  que s1 no sea null y validamos que s1 y s2 sean igual y asi no hace falta , validar que s2 no sea null
        // por que si s2 es igual a s2 ya no va ser null s2
        // para que validemos el tamaño que nos pide n validamos que x  sea menor que n menos 1 (por que n seria el null terminacion)
        while (s1[x] && (x < n - 1) && s1[x] == s2[x])
          x++;//Mientras sean iguales el index sube cada caracter hastas llegar hasta el final 
          //como el man de la funcion original nos pide devolver unsigned char hacemos un casting en el return
        return ((unsigned char)s1[x] - (unsigned char)s2[x]);
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

nakama@MacBook-Air-de-David libft % ./a.out 
Las primeras 8 letras de la cadena "Hello, World!" son mayores que las de la cadena "Hello, C!".
nakama@MacBook-Air-de-David libft %
``\`

- [subir](#Índice)

### [ft_memset](src/ft_memset.c) 
  - ✔️ OK  
  - **Explicación:** esta funcion lo que hace es apuntar a la direccion de memoria y la rellena con el valor que le pases por c hasta n veces, no tiene complicacion
  aclar que el bucle es contador < len y hacer casting
  a usnigned char para ir byte a byte.
  - [subir](#Índice)
### [ft_memcpy](src/ft_memcpy.c)      
  - ✔️ OK  
  - **Explicación:** Como en la funcion general devolvemos un puntero a el dst declaramos dentro de la funcion nuestros unsigned char para seguir con la buena practica de comparar byte a byte gracias a hacerle un casting a los string que nos entran por cabecera.
  El objetivo de funciones como memcpy es proporcionar una operación de copia de memoria que pueda trabajar con datos de cualquier tipo. Al devolver un puntero de tipo void *, la función permite al usuario decidir el tipo de datos que se están copiando y cómo interpretar los resultados.
  - [subir](#Índice)
  ### [ft_memccpy](src/ft_memccpy.c)      
  - ✔️ OK  
  - **Explicación:** Así que, la función memccpy es como la versión intensiva de copiar y pegar en el universo de la programación. Imagina que quieres mover un cacho de datos (como una cadena) desde un lugar hasta otro, pero con un toque emocionante. Aquí está el truco: esta función no solo copia, también tiene un "detector de parada". ¿Qué significa eso? Sencillo, copia hasta que encuentra el carácter que le digas que pare (c) o hasta que haya copiado cierta cantidad de bytes (n). Y si topa con ese carácter especial, te dice dónde se quedó la diversión. Pero si no lo encuentra, te devuelve un "NULL" como diciendo "no lo hallé, amigo". Es como un copiar y pegar con actitud, siempre deteniéndose en lo que ocurra primero: llegar al límite de bytes o encontrar ese carácter particular.
  - Atencion Warning 
    - Recordar que si no encuentra el char que le pases el puntero que devuelve va a ser nulo
    - Pero va a copiar toda la cadena de texto que le pases hasta los n bytes
    - [ver main  de testeo con mi funcion](src/miftmccpy.c)
```c

#include "../libft.h"
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  //inicializacion de variables
  //para comparar byte a byte  
	const unsigned char	*source;
	unsigned char		*destiny;
	unsigned char		character;
	size_t				i;

	i = 0;
  //hacemos 
	source = (const unsigned char *)src;
	destiny = (unsigned char *)dst;
	character = (unsigned char)c;
	while (i < n)
	{
		destiny[i] = source[i];
		if (source[i] == character)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

  ```
  
Ejemplos Para entender como trabaja la funcion
```c
  #include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hola";
    char destination[] = "Holo";

    // Copiar todo el contenido de source a destination
    // como aqui le estamos pasando el caracter nulo va a recorrer todo el array de caracteres 
    // destination y como le pasamos por n el sizeof de source va a copiar el hola cp,`ñeta
    char *result = memccpy(destination, source, '\0', sizeof(source));

    if (result != NULL) {
        // '\0' se encontró antes de copiar toda la cadena source
        printf("Copia completa: %s\n", destination);
    } else {
        // '\0' (terminador nulo) no se encontró antes de copiar toda la cadena source
        printf("La copia no está completa.\n");
    }

    return 0;
}

  ```
En el siguiente caso jugamos para testear la funcionalidad y entender mejor como trabaja memccpy
  ```c
#include <stdio.h>
#include <string.h>

int main() {
    char Gerardo[] = "Gerardo";
    char David[] = "David";

    // Copiar desde David hasta encontrar 'i' o hasta el final de David
    char *puntero = memccpy(Gerardo, David, 'i', sizeof(David));

    if (puntero != NULL) {
        // 'D' se encontró antes de copiar toda la cadena David
        size_t longitud_copiada = puntero - Gerardo - 1;  // Excluir el carácter 'D'
        printf("Copia completa: %.*s\n", (int)longitud_copiada, Gerardo);
    } else {
        // 'D' no se encontró en la cadena David
        printf("Carácter 'D' no encontrado en la cadena David.\n");
    }

    return 0;
}



  ```
  En Este caso Tendriamos Como Resultado Davi , si le Dijeramos una D tendriamos como resultado D
  Ahora bien si tenemos este caso
  ```c
      char *puntero = memccpy(Gerardo, David, 'x', sizeof(David));

  ```
  El puntero valdra nullo por que no encontro el caracter x, pero si que modificara
  Gerardo a David
  [Prueba con la funcion original para este caso](pmemccpy.c)

  Copiara 
  - [subir](#Índice)
  ### [ft_atoi](src/ft_atoi.c)      
  - ✔️ OK  
  - **Explicación:** Convertir un char a un entero .
  Para esta funcion estoy usando 2 funciones extras de mi libreria vease [ft_isspace](ft_isspace.c) y [ft_isdigit](ft_isdigit.c) queda mas legible y entendible. Para esta funcion hay que tener en cuenta que la función isspace verifica si un carácter es un espacio en blanco según la configuración de espacio en blanco en la localización actual. Esto incluye caracteres como el espacio (' '), tabulación horizontal ('\t'), retorno de carro ('\r'), avance de página ('\f'), nueva línea ('\n') ya que la funcion original que estamos imitando asi lo hace
  2147483647 es el entero positivo mas grande que entra dentro de un int 
  -2147483648 es el entero negativo mas pequeño , tendremos problemas de overflow si no lo controlamos.
  
```c

#include "../libft.h"
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
  - [subir](#Índice)

### [ft_memchar](src/ft_memchr.c) 
  - ✔️ OK  
  - **Explicación:** funcion que busca un caracter c (convertido a usgined char) en el string
  - y devuelve un puntero si lo encuentra a su posicion si no lo encuentra devuelve null
```c
  #include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    // Declaración de variables
	const unsigned char *pointer; // Puntero para tratar la memoria como bytes individuales
	size_t index; // Índice para iterar a través de la memoria

    // Inicialización de variables
	index = 0; // Inicialización del índice a 0
	pointer = (unsigned char *)(s); // Conversión del puntero de entrada a unsigned char

    // Bucle while para recorrer los primeros n bytes de memoria
	while (n > index)
	{
        // Comprobación de igualdad entre el byte actual y el valor de c
		if (pointer[index] == (unsigned char)(c))
			return ((void *)&pointer[index]); // Devolución del puntero al byte encontrado
		index++; // Incremento del índice para pasar al siguiente byte
	}

    // Si no se encontró ninguna coincidencia, se devuelve NULL
	return (NULL);
}
```
- [subir](#Índice)
  
  - Testeo basico donde comparo las direcciones apuntas por mi funcion 
  - y la original. 
```c
int	main(void)
{	
    char str[] = "hola";
    // Creo punteros con ft_memchr de todos los caracteres
    char *puntero_ft = ft_memchr(str, 'h', 5);
    char *puntero2_ft = ft_memchr(str, 'o', 5);
    char *puntero3_ft = ft_memchr(str, 'l', 5);
    char *puntero4_ft = ft_memchr(str, 'a', 5);

    // Imprimo las direcciones para ver si son continuas (ft_memchr)
    printf("\n ft_memchr - Dirección apuntada por el primero %p", (void *)puntero_ft);
    printf("\n ft_memchr - Dirección apuntada por el segundo %p", (void *)puntero2_ft);
    printf("\n ft_memchr - Dirección apuntada por el tercero %p", (void *)puntero3_ft);
    printf("\n ft_memchr - Dirección apuntada por el cuarto %p", (void *)puntero4_ft);

    // Creo punteros con memchr de todos los caracteres
    char *puntero_std = memchr(str, 'h', 5);
    char *puntero2_std = memchr(str, 'o', 5);
    char *puntero3_std = memchr(str, 'l', 5);
    char *puntero4_std = memchr(str, 'a', 5);

    // Imprimo las direcciones para ver si son continuas (memchr)
    printf("\n memchr   - Dirección apuntada por el primero %p", (void *)puntero_std);
    printf("\n memchr   - Dirección apuntada por el segundo %p", (void *)puntero2_std);
    printf("\n memchr   - Dirección apuntada por el tercero %p", (void *)puntero3_std);
    printf("\n memchr   - Dirección apuntada por el cuarto %p", (void *)puntero4_std);
}

  ```
  - [subir](#Índice)
  - Caso adicional: Carácter no encontrado

```c
    char *noEncontrado_ft = ft_memchr(str, 'z', 5);
    char *noEncontrado_std = memchr(str, 'z', 5);
    printf("\n ft_memchr - Dirección apuntada por 'noEncontrado': %p", (void *)noEncontrado_ft);
    printf("\n memchr   - Dirección apuntada por 'noEncontrado': %p", (void *)noEncontrado_std);
```
  - Caso adicional: Búsqueda en una cadena vacía
```c
    char strVacia[] = "";
    char *enCadenaVacia_ft = ft_memchr(strVacia, 'a', 0);
    char *enCadenaVacia_std = memchr(strVacia, 'a', 0);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaVacia': %p", (void *)enCadenaVacia_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaVacia': %p", (void *)enCadenaVacia_std);
```
- [subir](#Índice)
- 
  - Caso adicional: Búsqueda en una cadena corta
  
  ```c
    char strCorta[] = "abc";
    char *enCadenaCorta_ft = ft_memchr(strCorta, 'b', 2);
    char *enCadenaCorta_std = memchr(strCorta, 'b', 2);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaCorta': %p", (void *)enCadenaCorta_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaCorta': %p", (void *)enCadenaCorta_std);
 
  ```
  - [subir](#Índice)
  -     // Caso adicional: Búsqueda de un carácter nulo
  ```c
    char *nuloEncontrado_ft = ft_memchr(str, '\0', 5);
    char *nuloEncontrado_std = memchr(str, '\0', 5);
    printf("\n ft_memchr - Dirección apuntada por 'nuloEncontrado': %p", (void *)nuloEncontrado_ft);
    printf("\n memchr   - Dirección apuntada por 'nuloEncontrado': %p", (void *)nuloEncontrado_std);
    ```
    - [subir](#Índice)
  - Caso adicional: Búsqueda en una cadena más larga
    ```c
    char strLarga[] = "This is a longer string.";
    char *enCadenaLarga_ft = ft_memchr(strLarga, 'r', 20);
    char *enCadenaLarga_std = memchr(strLarga, 'r', 20);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaLarga': %p", (void *)enCadenaLarga_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaLarga': %p", (void *)enCadenaLarga_std);
  ```
  - [subir](#Índice)
    - Caso adicional: Búsqueda en una cadena completa
    ```c
    char strCompleta[] = "fullstring";
    char *enCadenaCompleta_ft = ft_memchr(strCompleta, 'g', 11);
    char *enCadenaCompleta_std = memchr(strCompleta, 'g', 11);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaCompleta': %p", (void *)enCadenaCompleta_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaCompleta': %p", (void *)enCadenaCompleta_std);
  ```
- [subir](#Índice)
# [ft_memmove](src/ft_memmove.c) 
  - ✔️ OK  
  - **Explicación:** 
    - Hace lo mismo que memcopy lo malo es que memcopy puede tener comportamiento indefinido cuando
      dos areas de memoria se solapan como en este ejemplo 
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char str_copy_memcpy[20];
    char str_copy_memmove[20];

    // Uso de memcpy con solapamiento
    memcpy(str_copy_memcpy, str + 7, 5);
    printf("Resultado con memcpy y solapamiento: %s\n", str_copy_memcpy);

    // Uso de memmove con solapamiento
    memmove(str_copy_memmove, str + 7, 5);
    printf("Resultado con memmove y solapamiento: %s\n", str_copy_memmove);

    return 0;
}
```
el resultado al ejecutarlo 
```bash
nakama@MacBook-Air-de-David libft % ./a.out
Resultado con memcpy y solapamiento: World��m
Resultado con memmove y solapamiento: World
nakama@MacBook-Air-de-David libft % ./a.out
Resultado con memcpy y solapamiento: Worldtk
Resultado con memmove y solapamiento: World
nakama@MacBook-Air-de-David libft % ./a.out
Resultado con memcpy y solapamiento: WorldtXm
Resultado con memmove y solapamiento: World
nakama@MacBook-Air-de-David libft % 
```

Vemos que con memcopy hay basura, eso se debe a que no esta inicializado todo el string y hace un comportamiento indefinido
Este caso me ocurrio para el propio test de la funcion memcopy que no conseguia que fueran iguales los strings
le meti un bzero a los dos stings y se arreglo el problema.


# Implementación de la función `memmove` en C

La siguiente implementación en C es una versión de la función `memmove`, utilizada para copiar bloques de memoria de una dirección de origen a una dirección de destino. La particularidad de `memmove` es que maneja correctamente regiones de memoria que se superponen, a diferencia de `memcpy`. En este código, se verifica si las regiones de origen y destino se superponen, y en caso afirmativo, se utiliza un enfoque de copia hacia atrás para garantizar que los datos no se corrompan durante la copia.

```c
void *ft_memmove(void *dst, const void *src, size_t len)
{
    // Declaración de variables
    unsigned char *dst_temp;
    unsigned char *src_temp;

    // Verificación de punteros nulos
    if (!dst && !src)
        return (NULL);

    // Inicialización de punteros a nivel de byte
    dst_temp = (unsigned char *)dst;
    src_temp = (unsigned char *)src;
````
- vayamos a la chicha del asunto hay dos caminos a tomar
- Si las regiones de origen y destino se superponen se utiliza una copia hacia atrás para evitar corrupción de datos.
Lo que sucede es  que necesitamos comprobar tambien que la direccion  destino 
sea menor que la direccion final de la region de origen src_temp+len
# Verificación de Superposición de Regiones de Memoria

Supongamos que tenemos dos regiones de memoria:

```plaintext
|---------------------|  <!-- Región de memoria A (src_temp) -->
|        Datos A       |
|---------------------|

|---------------------|  <!-- Región de memoria B (dst_temp) -->
|        Datos B       |
|---------------------|
```
Si no comprobamos dst_temp < src_end y las regiones de memoria se superponen, podríamos tener un problema:
```plaintext
|---------------------|  <!-- Región de memoria A (src_temp) -->
|        Datos A      |
|---------------------|

|-----------------------------|  <!-- Región de memoria B (dst_temp) -->
|        Datos B (parcial)    |
|-----------------------------|
```
En este caso el problema es que la region de memoria de dst_temp se ha extendido mas haya de la de origen
y estariamos escribiendo en otras direcciones de memoria que no pertenecen a la memoria original
lo solventamos gracias a este condicional
```c
    // Verificación de superposición de regiones de memoria
    if (src_temp < dst_temp && dst_temp < src_temp + len)
    {
        // Copia hacia atrás en caso de superposición
        while (len--)
            dst_temp[len] = src_temp[len];
    }
````
si no se cumple lo anterior escribimos hacia delante como en un memcopy
```c
    else
    {
        // Copia hacia adelante si no hay superposición
        while (len--)
            *(dst_temp++) = *(src_temp++);
    }

    // Devolución del puntero de destino
    return (dst);
}

```

- [subir](#Índice)
## [ft_memcmp](src/ft_memcmp.c) 
  - ✔️ OK  
  - **Explicacion** 
    - Devuelve la diferencia si los 2 strings son diferentes o 0 si son iguales
    ```c
    #include "../libft.h"

    int	ft_memcmp(const void *s1, const void *s2, size_t n)
          {
            unsigned char	*str1;
            unsigned char	*str2;

            str1 = (unsigned char *) s1;
            str2 = (unsigned char *) s2;
            while (n > 0)
            {
              if (*str1 != *str2)
                return (*str1 - *str2);
              str1++;
              str2++;
              n--;
            }
            return (0);
          }

    ```
 
  - [subir](#Índice)

## [ft_strchr](src/ft_strchr.c) y [ft_strrchr](src/ft_strrchr.c)
  - ✔️ OK  
  - **Explicacion** Son dos funciones muy parecidas.
    - La diferencia es que `ft_strchr` devuelve un puntero al primer char igual al que le metamos para comparar y `ft_strrchr` lo devuelve al ultimo 
    que sea igual en la cadena
 - ```c
    char	*ft_strchr(const char *s, int c)
    {
  	// Declarar variables
	  char	*str1;
	  char	c_copy;
	  size_t	index;

	  // Inicializar variables
	index = 0;
  	str1 = (char *)s;
  	c_copy = c;

	// Bucle para buscar el carácter en la cadena
	  while (str1[index] != c_copy)
	  {
		// Si llegamos al final de la cadena 
    //y no encontramos el carácter, devolvemos NULL
		if (str1[index] == '\0')
			return (NULL);
		
		// Incrementar el índice para avanzar en la cadena
		index++;
	  }

	// Devolver un puntero al lugar donde se encontró el carácter
	  return ((char *)str1 + index);
    }  
    ```
    - Como queremos encontrar el primero vamos de principio a final  sin embargo en `ft_strrchar` queremos encontrar el char y ademas que sea el ultimo que haya en la cadena 
```c
char	*strrchr(const char *s, int c)
{
	char	*str1;
	size_t	len;
	
	// Inicializamos str1 antes de usarla
	str1 = (char *)s;

	// Como esta vez el man nos dice que devuelve un puntero
	// a la última vez que aparece el char, empezamos desde el final 
	len = ft_strlen(str1);

	// Este if sirve para evitar entrar en el while y ahorrarnos
	// tiempo de ejecución del programa en estes casos
	// Comprobamos si es nulo para no tenernos que meter en el bucle
	if (c == '\0')
		return (str1 + len);

	// Condicional que devuelve el puntero del string si lo encuentra 
	// en la primera posición  	
	if (str1[0] == (char)c)
		return(str1);

	// Bucle donde buscamos el carácter de manera invertida 
	while (len != 0)
	{
		// Condicional que chequea el carácter y devuelve su posición
		if (str1[len] == (char)c)
			return (str1 + len);
		len--;
	}
  //en el caso que sea la primera psicion donde se encuentre el charh no hacemos ninguna operacion y devolvemos el puntero original
  //ESTE IF esta aqui por la sencilla razon que debemos 
  //pasar por todos los anteriores.
  if (s[0] == (char)c)
		return (str1);
	// Devuelve nulo si no lo encuentra  
	return (0);
}

  ```
  - [subir](#Índice)

  ## [ft_strlcat](src/ft_strlcat.c) 
  - ✔️ OK  
  - **Explicacion** concatena dos strings y nos devuelve la nueva longitud
```c
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		index;

	//si no existe size devolvemos el tamaño de src 
	if (!size)
		return (ft_strlen(src) + size);
	//asignamos a src temporal el tamaño de src 
	src_len = ft_strlen(src);
	index = 0;
	//recorremos destino para sacar el largo de destino y guardo en dst_len
	while (dst[index] && index < size)
		index++;
	dst_len = index;
	//recorremos source gracias a aque la resta de los dos contadores 
	while (src[index - dst_len] && index < size - 1)
	{
		//entonces desde el final de origen empezamos a escribrir el inicio de source
		dst[index] = src[index - dst_len];
		index++;
	}
	if (dst_len < size)
		//aseguramos el valor nulo al finalizar la copia
		dst[index] = '\0';
	//devolvemos como nos pide  el man la nueva longitud del string 
	return (dst_len + src_len);
}
  ```
  - [subir](#Índice)
  ## [ft_strnstr](src/ft_strnstr.c) 
  - ✔️ OK  
  - **Explicacion** busca una aguja en un pajar el string que pasemos por aguja sera buscado en el pajar y comprobara el largo de la aguja que le pasemos por n
```c
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;           // Índice para recorrer el haystack
	size_t	needle_index;    // Índice para recorrer el needle

	// Si needle es una cadena vacía, devuelve un puntero al inicio de haystack
	if (*needle == '\0')
		return ((char *)haystack);

	index = 0;  // Inicializa el índice del haystack
	while (index < len && haystack[index])  // Recorre el haystack hasta len o el final de la cadena
	{
		needle_index = 0;  // Inicializa el índice del needle
		while (haystack[index + needle_index] == needle[needle_index]
			&& (index + needle_index) < len)  // Compara los caracteres de haystack y needle
		{
			needle_index++;
			// Si needle se ha consumido completamente, se encontró una coincidencia
			if (!needle[needle_index])
				return ((char *)&haystack[index]);
		}
		index++;  // Avanza al siguiente carácter en haystack
	}

	return (NULL);  // Si no se encuentra ninguna coincidencia, devuelve NULL
}

  ```
  - [subir](#Índice)

### [ft_calloc](src/ft_calloc.c) 
  - ✔️ OK  
  - **Explicación:** La función `calloc` en C se utiliza para asignar dinámicamente un bloque de memoria contigua para un número especificado de elementos, cada uno de un tamaño determinado. A diferencia de `malloc`, `calloc` inicializa la memoria asignada a cero
```c
void	*ft_calloc(size_t count, size_t size)
{
    // Declarar un puntero para almacenar la memoria asignada
    void	*pointer;
    
    // Utilizar malloc para asignar un bloque de memoria del tamaño requerido
    pointer = malloc(size * count);
    
    // Verificar si la asignación de memoria fue exitosa
    if (!pointer)
        return (NULL);

    // Inicializar la memoria asignada a cero 
    ft_bzero(pointer, size * count);

    // Devolver el puntero a la memoria asignada e inicializada
    return(pointer);
}
```
  ## [ft_strdup](src/ft_strdup.c) 
  - ✔️ OK  
  - **Explicacion** 
      - Esta funcion se encarga de comprobar que hay suficiente memoria para el string que le pasas.
      - Despues copia el string en el puntero que ha reservado la memoria 
      - si hubo suficiente memoria te devuelve un puntero si no pudo hacerlo te devuelve nulo
      - Problemas durante la funcion , Explicacion de errores
```c
char *ft_strdup(const char *s1)
{
    size_t len;
    char *str;
    
    len = 0;
    // Calcula la longitud de la cadena s1
    while(s1[len])
        len++;

    //Mi primer error
    // Error: Deberia asignar espacio para len + 1 caracteres para incluir el final del string
    str = ft_calloc(sizeof(char), len);
    if (!str)
        return (NULL);

    //MI segundo error 
    //Error: Deberia copiar len + 1 bytes para incluir el caracter de final del string
    ft_memcpy(str, s1, len);

    return str;
}
```
Como no pasaba el len  + 1 no tenia espacio para el caracter nulo
-Codigo arreglado :
```c
#include "../libft.h"


char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;
  //mejora aplicando ft_strlen al string recibido + 1 nos devuelve la longitud mas un espacio
  //para el caracter null;
	len = ft_strlen(s1) + 1;
	str = ft_calloc(sizeof(char),len);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len);
	return (str);
}

```
- [subir](#Índice)

### [ft_substr](src/ft_substr.c)      
  - ✔️ OK  
  - **Explicación:** Reserva memoria para la cadena de caracteres que va a devolver, y que proviene de la
cadena pasada como argumento.Esta nueva cadena comienza en el índice ’start’ y tiene como tamaño máximo ’len’
  DESGRANANDO LOS PROBLEMAS
  - version funcional pero que le falta trabajo
 ```C

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
  //comprobando que exita s 
		if (!s)
			return (NULL);
  //haciendo un callor de la longitud mas uno para cada char
	newstring = (char *)ft_calloc((len + 1), sizeof(char));
  //comprobar que se ha podido asignar la memoria
	if (!newstring)
		return (NULL);
    //copiar en en el nuevo string usando para ello la direccion de donde empieza s + start
	ft_memcpy(newstring, (void *)(s + start), len);
  //ASIGNAL LA NULL TERMINACION
	newstring[len] = '\0';
	return (newstring);
}
  ```
 - Actualizacion no definitiva


```c
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *newstring;
    size_t slen;

    slen = ft_strlen(s);
    if (!s)
        return (NULL);
    if (start >= slen)
        return (ft_strdup(""));
```
`if (start >= slen) return (ft_strdup(""));`: Esta línea verifica si el índice de inicio `start` es mayor o igual que la longitud de la cadena de entrada `s`. Si es así, la función devuelve una cadena vacía llamando a `ft_strdup("")`. Esto maneja el caso en el que el índice de inicio está fuera de los límites
```c
    if (len > slen - start)
        len = slen - start;
```
-comprobamos si la longitud es mayor que la cadena que vamos a copiar desde start,si la longitud se pasa entonces le decimos que sea la que verdaremente nos queda ya que si no lo hacemos tendremos pobrlemas;
```c
    newstring = (char *)ft_calloc((len + 1), sizeof(char));
    if (!newstring)
        return (NULL);
    ft_memcpy(newstring, (void *)(s + start), len);
    newstring[len] = '\0';
    return (newstring);
      }
  ```
resto del codigo
  - Actualizacion v2 Despues de pasarle el libft_test y los demas testing la funcion quedaria asi el unico cambio seria mover de sitio la asignacion de tamaño
  
  ```c

  char	*ft_substr(char const *s, unsigned int start, size_t len)
    {
    char	*newstring;
    size_t	slen;

    if (!s)
      return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)
      return (ft_strdup(""));
    if (len > slen - start)
      len = slen - start;
    newstring = (char *)ft_calloc((len + 1), sizeof(char));
    if (!newstring)
      return (NULL);
    ft_memcpy(newstring, (void *)(s + start), len);
    newstring[len] = '\0';
    return (newstring);
  }
    ```


  - [subir](#índice)
  ### [ft_strjoin](src/ft_strjoin.c) 
  - ✔️ OK  
  - **Explicación:** UNE DOS STRING USANDO  MALLOC
  - Version 1.1 (actualizada) 
  - **Explicación v2:** Al pasar libft test me daba Error con los leaks de memoria , aunque en el codigo original validaba los casos de recibir string nullo cuando asignaba tamaños lo hacia antes de la comprobacion de cadenas vacias ahora se hacen donde deben.

  ```c
  char	*ft_strjoin(char const *s1, char const *s2)
  {
    size_t	lens1;
    size_t	lens2;
    size_t	lensdst;
    char	*newstring;

    if (!s1 || !s2)
      return (NULL);
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    lensdst = lens1 + lens2 + 1 ;
    newstring = ft_calloc(sizeof(char), lensdst);
    if (!newstring)
      return (NULL);
    ft_memcpy(newstring, s1, lens1);
    ft_memcpy(newstring + lens1, s2, lens2);
    return (newstring);
  }
  ```
  - Version 1.0 (con problemas de leaks de memoria por los tamaños)
```c
    char	*ft_strjoin(char const *s1, char const *s2)
    {
    //declaramos longitudes y un puntero 
    size_t	lens1;
    size_t	lens2;
    size_t	lensdst;
    char	*newstring;
    //obtenemos longitudes de cada una y las sumamos con un + 1 para el caracter de null
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    lensdst = lens1 + lens2 + 1;
    //comprobamos que existan una de las dos 
    if (!s1 || !s2)
      return (NULL);
      //reservamos y asignamos memoria  con calloc un sizeof de char, y longitud final 
    newstring = ft_calloc(sizeof(char), lensdst);
    //comprobamos que haya salido bien
    if (!newstring)
      return (NULL);
    //Hago memcopy del primero y al segundo le sumo la longitud del primero para concatenarlas justamente una en el final de la otra
    ft_memcpy(newstring, s1, lens1);
    ft_memcpy(newstring + lens1, s2, lens2);
    return (newstring);
  }
  ```
  - [subir](#Índice)

  ### [ft_strtrim](/src/ft_strtrim.c)      
  - ✔️ OK  
  - **Explicación:** Esta funcion solo quita del principio y del final  nunca por el medio es decir si tenemos 
    - un string "que hola que tal que"
    - y por set tenemos "que"
    - nos devolverlia hola que tal
```c

      #include "libft.h"

      char	*ft_strtrim(char const *s1, char const *set)
      {
        char *newstring;
        size_t start;
        size_t lens1;

        if (!s1 || !set)
          return (NULL);
        start = 0;
        // EL FINAL MENOS EL CHAR DE CARACTER NULO
        lens1 = ft_strlen(s1) - 1;
  ```
   - Mientras s1 exista y ft_strchr devuelva un puntero diferente de NULL,
    incrementamos start para encontrar el primer carácter que no está en el conjunto.

  ```c
        while (s1[start] && ft_strchr(set, s1[start]))
          start++;
        // CONDICIONAL QUE COMPRUEBA SI ESTAMOS EN EL FINAL SI ES ASI LA CADENA ESTABA EN LLENA DE LOS CARACTERES NO DESEADOS
        // Y DEVUELVE UN STRING VACIO
        if (start == lens1 + 1)
          return (ft_strdup(""));
          	// Si start es igual a lens1 + 1, significa que toda la cadena consistía en caracteres no deseados y devolvemos una cadena vacía.
        	// En este bucle while, retrocedemos lens1 hasta el último carácter que no está en el conjunto set.
        while (ft_strchr(set, s1[lens1]))
          lens1--;
  ```
    -  La nueva cadena se obtiene utilizando ft_substr, que crea una nueva cadena con calloc.
          Los parámetros son la cadena original, la posición desde la cual comenzar la nueva cadena (start),
          y la longitud de la nueva cadena, que se calcula restando start de lens1 y sumando 1 para incluir el carácter nulo.
          Por ejemplo, en un trim de "que hola que tal que" con el conjunto "que":
          start vale 4, lens1 vale 17.
          La longitud de la nueva cadena sería 17 - 4 + 1 = 14 (13 caracteres de contenido más el carácter nulo).
  ```c
       
        newstring = ft_substr(s1, start, lens1 - start + 1);
        if (!newstring)
          return (NULL);
        return (newstring);
      }
   ```
  
  - [subir](#Índice)
  ### [ft_strsplit](src/ft_split.c)      
  - ✔️ OK  
  - **Explicación:** Esta explicacion estara dividida en 5 funciones
  - `ft_getnumberstrings`
    [adjunto foto diagrama de flujo de contar las palabras](/resources/diagramacontarpalabras.jpg)
```c
    static int	ft_getnumberstrings(char const *s, char c)
  {
    int	index;
    int	numberstr;

    index = 0;
    numberstr = 0;
    /// Ejemplo con HOLA HOLA HOLA y H
    while (s[index])
    {
      // 1 iteracion H es igual a H?
      // 2 interacion index vale 5  h es igual a h?
      while (s[index] == c)
        index++;
      //corremos el index o es diferente de h
      // y diferente de terminacion nulla
      if (s[index] != c && s[index] != '\0')
      {
        numberstr++; // contador de palabra vale 1 ahora
          //2 iteracion ahora vale el contador de palabras vale 2
      }
      // este while es donde se hace la magia y saltamos todos los caracteres que no sean iguales
      // gracias a ello vamos siempre a empezar por el char delimitador
      // es decir que si tenemos un hola hola hola y una h como delimitador en cuyanto llegue aqui va a saltar directamente a la siguiente h
      while (s[index] != c && s[index] != '\0')
        index++;
      // ahora el while entero empezaria otra vez desde la h
      // 
    }
    return (numberstr);
  }
```
  `ft_getlenstrings`
  ```c
  static int	getlenstrings(char const *s, char c)
  { 
	int	index;
	int	lenstr;

	index = 0;
	lenstr = 0;
	while (s[index] && s[index] == c)
		index++;
  //Magia para calcular la longitud de cada subcadena
	while (s[index] && s[index] != c)
	{
		lenstr++;
		index++;
	}
	return (lenstr);  
  }
  ```
  `ft__free`: Sacar fuera linea de codigo de limpiar memoria si ha fallado la asignacion al apuntero
  ```c
  
  static void	ft_free(char **substrings, int index)
{
	while (index > 0)
		free(substrings[--index]);
	free(substrings);
}
  ```
  `ft_get_substrings`: He tenido que sacar fuera parte de lo que hacia el split por que si no norminette no pasaba por lineas, al final nos queda mas facil de leer ft_split
  ```c
  static int	ft_get_substrings(char const *s, char c, char **substrings,
		int num_str)
{
	int	index; // Índice para recorrer las subcadenas
	int	len;   // Longitud de la subcadena actual

	index = 0;
	while (index < num_str)
	{
		while (*s == c) // Saltar caracteres delimitadores
			s++;
		len = ft_getlenstrings(s, c); // Obtener longitud de la subcadena actual
		substrings[index] = ft_strndup(s, len); // Copiar la subcadena actual
		if (!substrings[index])
			return (0); // Devolver 0 en caso de error al duplicar la subcadena
		s += len; // Mover el puntero s a la siguiente posición después de la subcadena
		index++; // Mover al siguiente índice de subcadena
	}
	return (1); // Devolver 1 si se completó exitosamente la obtención de subcadenas
}

  ```
  `ft_split`
  ```c
  char	**ft_split(char const *s, char c)
{
	int		num_str;      // Número de subcadenas
	char	**substrings; // Arreglo de subcadenas

	if (!s)
		return (NULL); // Devolver NULL si la cadena de entrada es nula

	num_str = ft_getnumberstrings(s, c); // Obtener el número de subcadenas
	substrings = ft_calloc(num_str + 1, sizeof(char *)); // Asignar memoria para el arreglo de subcadenas
	if (!substrings)
		return (NULL); // Devolver NULL si falla la asignación de memoria

	if (!ft_get_substrings(s, c, substrings, num_str))
	{
		ft_free(substrings, num_str); // Liberar memoria en caso de error
		return (NULL);
	}

	substrings[num_str] = NULL; // Establecer el último elemento del arreglo como NULL
	return (substrings); // Devolver el arreglo de subcadenas
}

  ```
- [subir](#Índice)

  ### [ft_itoa](src/ft_itoa.c)      
  - ✔️ OK  
  - **Explicación:** Esta explicacion estara dividida en 3 funciones
  - [adjunto foto diagrama flujo](resources/Ilustración_sin_título%202.jpg)
  `ft_itoa`
  ```c
  char	*ft_itoa(int n)
  {
    char	*result;
    int		len;
    //Controlar el numero negatimo maximo en este caso metemos
    //directamente el numero como strin
    if (n == -2147483648)
      return (ft_strdup("-2147483648"));
    //obtencion longitud del string 
    len = get_int_len(n);
    //asignar conn malloc el espacio gracias al len
    result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL)
      return (NULL);
      //llamar a la chicha recursiva
    recursive_itoa(n, result);
    //asignar al final del strinng el caracter null termination
    result[len] = '\0';
    return (result);
  }
  ```
  `ft_get_int_len`

  ```c
  static int	ft_get_int_len(int n)
  {
    int	len;
      
    if (n <= 0)
      len = 1;
    else
      len = 0;
    while (n != 0)
    {
      //mientras n sea diferente de 0 dividimos por 10 para obtener la longitud del string 123 123/10 12/10 1/10 longitud 3
      n /= 10;
      len++;
    }
    return (len);
  }
  ```
  `ft_recursive_itoa`
    ```c
    static void	ft_recursive_itoa(int n, char *result)
    {
      int	len;

      if (n < 0)
      {
        *result = '-';
        //si el numero es negatimo guardamos el signo en el string
        //y con el -delante de la n hacemos la recursividad
        //al pasarle -n pasa el opuesto en este caso lo convierte en nnegativo y corremos la posicion del string
        ft_recursive_itoa(-n, result + 1);
      }
      else if (n >= 10)
      {
        //se llamara de manera recursiva por ejemplo 123
        //123/10  12   12/10 1
        ft_recursive_itoa(n / 10, result);
        len = ft_get_int_len(n / 10);
        result += len;
        //cualquier numero sumado a 0 da el numero hacemos el modulo de 10 para que nos de  el numero que queremos obtener ya que 
        //123 % 10 = 3  12 %10 = 2  
        *result = '0' + (n % 10);
      }
      else
      {
        *result = '0' + n;
      }
    }

    ```
### [ft_strmapi](src/ft_strmapi.c) 
  - ✔️ OK  
  - **Explicación:** aplica una funcion a un string 
  ```c
  char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
  {
    size_t	len;
    char	*result;
    size_t	index;

    index = 0;
    if (s == NULL || f == NULL)
      return (NULL);
    //objtener longitud asignar tamao
    len = ft_strlen(s);
    result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL)
      return (NULL);
      //bucle que recorre toda la cadena de entrada aplicando la funcion de entrada y guardando
      //el resultado en el nuevo string
    while (index < len)
    {
      result[index] = f((unsigned int)index, s[index]);
      index++;
    }
    result[len] = '\0';
    return (result);
  }
  ```
  - [subir](#Índice)
  ### [ft_striteri](src/ft_striteri.c)      
  - ✔️ OK  
  - **Explicación:**
  Esta función itera sobre cada carácter de la cadena s y llama a la función f proporcionándole el índice del carácter y la dirección del carácter. La función f puede modificar el carácter directamente si es necesario.
  ```c
  void ft_striteri(char *s, void (*f)(unsigned int, char *))
  {
      // Se declara la variable 'index' para representar el índice de la cadena.
      unsigned int index;

      // Se inicializa el índice en 0.
      index = 0;

      // Se verifica si tanto la cadena 's' como la función 'f' son no nulas.
      if (s && f)
      {
          // Se inicia un bucle while que recorre la cadena hasta encontrar el carácter nulo ('\0').
          while (s[index] != '\0')
          {
              // En cada iteración, se llama a la función 'f' con el índice y la dirección del carácter actual.
              f(index, &s[index]);

              // Se incrementa el índice para pasar al siguiente carácter en la siguiente iteración.
              index++;
          }
      }
      // Si 's' o 'f' es nulo, la función no realiza ninguna acción.
  }
  ```
  - [subir](#índice)
### [ft_putendl_fd](src/ft_putendl_fd.c) 
  - ✔️ OK  
  - **Explicación:** Muy simple solo tienes que llamar a putstr y añadir un write 
    ```c
    void	ft_putendl_fd(char *c, int fd)
        {	
          if (c)
          {
          ft_putstr_fd(c, fd);
          write(fd, "\n", 1);
          }
        }
    ```
  - [subir](#índice)

  ### [ft_putnbr_fd](src/ft_putnbr_fd.c)      
  - ✔️ OK  
  - **Explicación:** lo mismo que en itoa pero sin alojar memoria.
  ```c
    void ft_putnbr_fd(int n, int fd)
  {
      // Comprobar si el número es el mínimo entero representable en un 'int'
      if (n == -2147483648)
          ft_putstr_fd("-2147483648", fd);
      // Comprobar si el número es negativo
      else if (n < 0)
      {
          // Imprimir el signo negativo
          ft_putchar_fd('-', fd);
          // Llamar recursivamente a la función con el valor absoluto de 'n'
          ft_putnbr_fd(-n, fd);
      }
      // Comprobar si el número es mayor o igual a 10
      else if (n >= 10)
      {
          // Llamar recursivamente a la función con la parte entera de 'n' dividida por 10
          ft_putnbr_fd(n / 10, fd);
          // Imprimir el dígito más bajo de 'n' 
          ft_putchar_fd(n % 10 + '0', fd);
      }
      // Si el número es un solo dígito, imprimirlo directamente
      else
          ft_putchar_fd(n + '0', fd);
  }

  ```
  - [subir](#índice)
  ### Declarar una linked list
- Las listas enlazadas son estructuras de datos que permiten acceder a elementos almacenados en puntos de memoria no necesariamente contiguos. Cada elemento, llamado nodo, contiene información y un puntero que indica la ubicación del siguiente nodo en la secuencia. Esto proporciona flexibilidad para gestionar datos dinámicamente y facilita la inserción o eliminación de elementos en cualquier posición de la lista sin necesidad de reorganizar la memoria de manera contigua

     ```c
     // Definición de la estructura 't_list'
      typedef struct s_list
      {
          void *content;          // Puntero genérico que puede apuntar a cualquier tipo de datos
          struct s_list *next;    // Puntero al siguiente nodo en la lista
      } t_list;

    ``` 
    ### Lo basico
    - Declarar Nuevos elementos : Puedes hacerlo asi pero la gracia esta mas abajo
    ```c
      //Declarar nuevos elementos de la t_list  
       t_list *root; //valor inicial o tlist
       t_list *node_1
       t_list *node_2
       //Asignar memoria a los elementos de la t_list
       root = malloc(sizeof(t_node));
       node_1 = malloc(sizeof(t_node));
       node_2= malloc(sizeof(t_node));
   ```
  - Asi mejor
    ```c
    /Declarar nuevos elementos de la t_list  
       t_list *root; //valor inicial o tlist
      
       //Asignar memoria a los elementos de la t_list
       root = malloc(sizeof(t_node));
       root -> next = malloc(sizeof(t_node));
       root -> next -> next = malloc(sizeof(t_node));
   ```
    ```plaintext
      ------------------------------              ------------------------------
    |              |             |            \ |              |             |
    |     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |
    |              |             |            / |              |             |
    ------------------------------              ------------------------------
    ```


  
  - [subir](#índice)

   ### [ft_lstnew](/bonus/ft_lstnew.c)
    - ✔️ OK  
  - **Explicación:** una funcion que crea un nodo.
  ```c
  t_list	*ft_lstnew(void *content)
  {
    t_list	*new_list;

    new_list = malloc(sizeof(struct s_list));
    if (!new_list)
      return (NULL);
    //despues de crear la lista le pasamos el valor de content a el primer elemento de la lista y  en next un puntero nulo
    new_list -> content = content;
    new_list -> next = NULL;
    return (new_list);
  }
  ```
  - [subir](#Índice)
### [ft_lstadd_front](/bonus/ft_lstadd_front.c)      
  - ✔️ OK  
  - **Explicación:**  Añade un nodo delante del anterior nodo.
  ```c
  void ft_lstadd_front(t_list **lst, t_list *new)
      {
          // Verifica si el nuevo nodo no es NULL
          if (new)
          {
              // Establece el puntero next del nuevo nodo al primer elemento actual de la lista
              new->next = *lst;

              // Actualiza el puntero al primer elemento de la lista para que apunte al nuevo nodo
              *lst = new;
          }
      }

  ```
  - [subir](#índice)
  ### [ft_lstsize](/bonus/ft_lstsize.c)      
  - ✔️ OK  
  - **Explicación:** la forma de iterar en las listas seria lo importante en esta funcion
  ```c
  int	ft_lstsize(t_list *lst)
  {
  int	count;

  count = 0;
  //PARA ITERAR A LO LARGO DE UNA LISTA El tope es que la validacion sea Null 
    while (lst != NULL) 
    {
      count++;//CONTADOR PARA DEVOLVER EL TAMAÑO 
      lst = lst->next;//esto seria un index/i ++  en arrays array[i] o *p+`
    }
  return (count);
  }
  ```
 
  - [subir](#índice)
  ### [ft_lstlast](/bonus/ft_lstlast.c)      
  - ✔️ OK  
  - **Explicación:** iteramos la lista con la validacion lst -> next  Mientras haya siguiente lst -> next
  Al final obtendremos el nodo en la ultima  posicion
  ```c
    t_list	*ft_lstlast(t_list *lst)
    {
      if (lst)
      {
        while (lst->next)
          lst = lst->next; //Esto es igual a lst ++
      }
      return (lst);
    }
  ```
  - [subir](#índice)
  
### [ft_lstadd_back](/bonus/ft_lstadd_front.c)      
  - ✔️ OK  
  - **Explicación:** Añadimos un nodo en la primera posicion de nuestra lista, para ello usaremos la funcion anterior `ft_lstlast`.
  ```c
  void	ft_lstadd_back(t_list **lst, t_list *new)
    {
      t_list *last;
      
      //importante verificar con !* si el contenido del puntero es nulo
      //hacer !lst verifica si el puntero apunta a nullo y no es lo que queremos.
      if (!*lst)
        *lst = new;
      else
      {
        last = ft_lstlast(*lst);//obtenemos la posicion del nodo 1
        last -> next = new;
      }
    }
  ```
  ## Mis Idas y venidas con las listas 
    - He tardado un poco en darme cuenta de esta movida, no se si eran las horas 
    o si era la noche que me confunde pero cosas a tener en cuenta 
  `ft_lstadd_back` Te añade un nodo al final de la lista el termino back me dio un giro
  y es que Back no refiere al que este mas atras por la izquierda es que realmente es el
  ultimo nodo en la lista, la confusion viene por que `ft_lstadd_front` parece que es la de frente la primera que te topas y no lo que hace es ser el primer nodo de la lista.
  ```plaintext
  Si tengo 3 nodos
  PRimer Nodo Manolo apunta a PEPE
  Segundo NOdo PEPE apunta Benito
  tercer  NOdo Benito apunta a null
  si hacemos `ft_lstadd_back("Rigoberta")
  AHora benito apunta a rigoberta
  y si hacemos ft_lstadd_front("Bandini")
  Ahora bandini apunta a manolo que apunta a pepe, etc
  ```
  En resumen 
  - FRONT SE REFIERE AL PRINCIPIO DE LA LISTA
  - BACK SE REFIERE AL FINAL DE LA LISTA
  - [subir](#índice)

## Mi main de listas
```c
	#include "../libft.h" 
	
	void print_list(t_list * head) {
    t_list * current = head;

    while (current != NULL) {
		printf("Valor del nodo: %s\n", (char *)current->content);
        current = current->next;
    }
}
	int main()
	{	//cramos una lista null
    t_list 	*lista = NULL;
		//genaramos 3 nodos
    t_list *node = ft_lstnew("El primero que añadi");
		t_list *node2 = ft_lstnew("Añadido con front");
		t_list *node3 = ft_lstnew("Añadido con el back");
		ft_putstr_fd("**PRIMER NODO \n",1);
    //añadidmos el node a lista
		ft_lstadd_front(&lista,node);
    //imprimimos lista
		print_list(lista);
    //comprobamos la diferencia despues de añadir el primero
    //uno por el principio de la lista es decir que la posicion uno que antes tenia 42
    //ahora la tiene añadido con el front
		ft_putstr_fd("**APLICAMOS AÑADIR FRONT: \n",1);
		ft_lstadd_front(&lista,node2);
		print_list(lista);
		ft_putstr_fd("**APLICAMOS AÑADIR BACK: \n",1);
    //y 
		ft_lstadd_back(&lista,node3);
		print_list(lista);
		printf("Numero de nodos : %i\n",ft_lstsize(lista));
		ft_putstr_fd("**Ultimo nodo de la lista(ft_lstlast): \n",1);
		print_list(ft_lstlast(lista));
		return 0;
	}
```
output
```bash
**PRIMER NODO 
Valor del nodo: El primero que añadi
**APLICAMOS AÑADIR FRONT: 
Valor del nodo: Añadido con front
Valor del nodo: El primero que añadi
**APLICAMOS AÑADIR BACK: 
Valor del nodo: Añadido con front
Valor del nodo: El primero que añadi
Valor del nodo: Añadido con back 
Numero de nodos : 3
**Ultimo nodo de la lista(ft_lstlast): 
Valor del nodo: Añadido con back 
```
- [subir](#índice)

### [ft_lstdelone](bonus/ft_lstdelone.c)      
  - ✔️ OK  
  - **Explicación:** Funcon que elimina un nodo especifico de la lista y libera su memoria, el puntero next no se libera ya que se espera que la lista continúe  despues de eliminar el nodo
  ```c
  void ft_lstdelone(t_list *lst, void (*del)(void *))
    {
        if (lst && del)
        {
            // Llama a la función 'del' para liberar el contenido del nodo
            if (lst->content)
                del(lst->content);

            // Libera la memoria ocupada por el nodo
            free(lst);
        }
    }
  ```
  - Main Con la funcion borrar
  ```c
  	#include "../libft.h" 

  void print_list(t_list *head) {
      t_list *current = head;

      while (current != NULL)
    {
          if (current->content != NULL) {
              printf("Valor del nodo: %s\n", (char *)current->content);
          } else {
              printf("Valor del nodo: (null)\n");
          }
          current = current->next;
      }
  }

  void	ft_del(void *content)
  {
    free(content);
  }									
    int main()
    {	
      char *str = ft_strdup("El primero que añadi");
      char *str2 = ft_strdup("Añadido con front");
      char *str3 = ft_strdup("Añadido con back ");

      t_list 	*lista = NULL;
      // Crear un nuevo nodo 
      t_list *node = ft_lstnew(str);
      // Crear un nuevo nodo co
      t_list *node2 = ft_lstnew(str2);
      t_list *node3 = ft_lstnew(str3);
      ft_putstr_fd("**PRIMER NODO \n",1);
      ft_lstadd_front(&lista,node);
      print_list(lista);
      ft_putstr_fd("**APLICAMOS AÑADIR FRONT: \n",1);
      ft_lstadd_front(&lista,node2);
      print_list(lista);
      ft_putstr_fd("**APLICAMOS AÑADIR BACK: \n",1);
      ft_lstadd_back(&lista,node3);
      print_list(lista);
      printf("Numero de nodos : %i\n",ft_lstsize(lista));
      ft_putstr_fd("**Ultimo nodo de la lista(ft_lstlast): \n",1);
      print_list(ft_lstlast(lista));
      ft_putstr_fd("**Borrado del node 3: \n",1);
      ft_lstdelone(node3,&ft_del);
      print_list(lista);

      return 0;
      }
  ```
  ```bash
    *PRIMER NODO 
  Valor del nodo: El primero que añadi
  **APLICAMOS AÑADIR FRONT: 
  Valor del nodo: Añadido con front
  Valor del nodo: El primero que añadi
  **APLICAMOS AÑADIR BACK: 
  Valor del nodo: Añadido con front
  Valor del nodo: El primero que añadi
  Valor del nodo: Añadido con back 
  Numero de nodos : 3
  **Ultimo nodo de la lista(ft_lstlast): 
  Valor del nodo: Añadido con back 
  **Borrado del node 3: 
  Valor del nodo: Añadido con front
  Valor del nodo: El primero que añadi
  Valor del nodo: (null)
  ```

  
  - [subir](#índice)
  ### [ft_lstclear](src/ft_lstclear.c) 
  - ✔️ OK  
  - **Explicación:** Se basa en usar la funcion `ft_lstdelone` mientras iteramos por toda la lista y usamos una lista temporal que apunte al siguiente nodo antes de borrar el nodo actual , para asi decirle a la lista que apunte al temporal, asi mantenemos la iteracion hasta que la validacion de lst sea null;
  ```c
  void	ft_lstclear(t_list **lst, void (*del)(void*))
  {
    t_list	*temp;
    //verificar si los punteros son validos
    if (lst && del)
    {
      //recorrer la lista y eliminar cada nodo
      while (*lst)
      {
        /*
        apuntamos en la lista temporal el siguiente nodo
        para guardar el acceso a los demas nodos de la lista
        */
        temp = (*lst)->next;
        //Eliminar el nodo actual y liberar su memoria
        ft_lstdelone(*lst,del);
        //como antes guardamos el resto de la lista en temporal
        //podemos recuperarla ahora
        *lst = temp;
        //asi borramos desde la posicion inicial a la final hasta que
        //lst no tenga nada que apuntar
      }
    }
  }
  ```
  - [subir](#Índice)
  ### [ft_lstiter](src/ft_lstiter.c) 
   - ✔️ OK  
  - **Explicación:** Aplicar funcion a todos los content de la lista [Main](.mains/mainiterarlistas.c)
  ```c
      void	ft_lstiter(t_list *lst, void (*f)(void *))
      {
        //comprobar lst y funcion sean pasadas
        if (lst && f)
        {
          //iteramos mientras lst tenga nodos que procesar
          while (lst)
          {
            //aplicamos la f funcion a el contenido de la lista
            f(lst->content);
            lst = lst->next;//nuestro i ++
          }
        }
      }

  ```
  - [subir](#Índice)
   ### [ft_lstmap](src/ft_lstmap.c) 
   - ✔️ OK  
   - **Explicación:** Aplicar funcion a todos los content de la lista y utilizar la funcion del si es necesario [Main](.mains/mainmaplist.c)
  ```c
      #include "../libft.h"  // Incluye el archivo de encabezado libft.h

  t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
  {
    t_list	*list_map;  // Puntero para la nueva lista resultante
    t_list	*new_node;  // Puntero para el nuevo nodo a agregar

    list_map = NULL;  // Inicializa el puntero a la nueva lista como NULL

    if (!lst || !f || !del)
      return (NULL);  // Verifica que los punteros no sean nulos; si alguno lo es, retorna NULL

    while (lst)
    {
      new_node = ft_lstnew(f(lst->content));  // Crea un nuevo nodo aplicando la función f al contenido actual

      if (!new_node)
      {
        ft_lstclear(&list_map, del);  // En caso de fallo, limpia la memoria y retorna NULL
        return (NULL);
      }

      ft_lstadd_back(&list_map, new_node);  // Agrega el nuevo nodo al final de la lista resultante
      lst = lst->next;  // Mueve al siguiente nodo en la lista original
    }

    return (list_map);  // Retorna el puntero a la nueva lista
  }

  ```
  - [subir](#Índice)

  ## Problemas que me encontre en mi programa main para testear estas funciones
  ```c
    int main()
      {	
        //Creamos y asignamos strs
        char *str = ft_strdup("El primero que añadi");
        char *str2 = ft_strdup("Añadido con front");
        char *str3 = ft_strdup("Añadido con back ");
        
        //generamos el principio de una lista null
        t_list 	*lista = NULL;
        // CreaMOs nuevos nodos 
        t_list *node = ft_lstnew(str);
        t_list *node2 = ft_lstnew(str2);
        t_list *node3 = ft_lstnew(str3);
        ft_putstr_fd("**PRIMER NODO \n",1);
        //primer  nodo añadido por el frente
        ft_lstadd_front(&lista,node);
        print_list(lista);
        ft_putstr_fd("**APLICAMOS AÑADIR FRONT: \n",1);
        //segundo nodo añadido por el frente seria nuestro nodo 1 y el anterior seria el 2
        ft_lstadd_front(&lista,node2);
        print_list(lista);
        //añadimos nodo por el final por detras y este seria nuestro nodo 3
        ft_putstr_fd("**APLICAMOS AÑADIR BACK: \n",1);
        ft_lstadd_back(&lista,node3);
        print_list(lista);
        printf("Numero de nodos : %i\n",ft_lstsize(lista));
        //tendriamos que node node 2 es nuestro node 1  y a la de borrar puede genarnos confusiones
        ft_putstr_fd("**Ultimo nodo de la lista(ft_lstlast): \n",1);
        print_list(ft_lstlast(lista));
  ```
  - [subir](#Índice)
      ### Veamos los diferentes pruebas borrando node , node 2 y node 3
### caso 1 borramos node  
      ```c
          
          ft_putstr_fd("**Utilizamos lstdelone: \n",1);
          ft_lstdelone(node,&ft_del);
          printf("Numero de nodos : %i\n",ft_lstsize(lista));
          print_list(lista);
          ft_putstr_fd("**Utilizamos lstclear: \n",1);
          ft_lstclear(&lista,&ft_del);
          printf("Numero de nodos : %i\n",ft_lstsize(lista));
          print_list(lista);
          return 0;
        }
      ```
       - Hemos Borrado Node Que es el primero que añadi pero en realidad es el segundo porque el node2 lo añadi con front con lo cual me muestra el primer nodo y apartir de ahi ya no me muestra nada tambien me da error por intentar limpiar dos veces el mismo nodo 
```bash
       **PRIMER NODO 
        Valor del nodo: El primero que añadi
        **APLICAMOS AÑADIR FRONT: 
        Valor del nodo: Añadido con front
        Valor del nodo: El primero que añadi
        **APLICAMOS AÑADIR BACK: 
        Valor del nodo: Añadido con front
        Valor del nodo: El primero que añadi
        Valor del nodo: Añadido con back 
        Numero de nodos : 3
        **Ultimo nodo de la lista(ft_lstlast): 
        Valor del nodo: Añadido con back 
        **Utilizamos lstdelone: 
        Numero de nodos : 2
        Valor del nodo: Añadido con front
        Valor del nodo: (null)
        **Utilizamos lstclear: 
        mi_programa(13225,0x1e5fd5ec0) malloc: Double free of object 0x155605fa0
        mi_programa(13225,0x1e5fd5ec0) malloc: *** set a breakpoint in malloc_error_break to debug 
  ```
## Caso 2 Borramos node2

```c
    ft_putstr_fd("**Utilizamos lstdelone: \n",1);
		ft_lstdelone(node2,&ft_del);
		printf("Numero de nodos : %i\n",ft_lstsize(lista));
		print_list(lista);
		ft_putstr_fd("**Utilizamos lstclear: \n",1);
		ft_lstclear(&lista,&ft_del);
		printf("Numero de nodos : %i\n",ft_lstsize(lista));
		print_list(lista);
		return 0;
 
 
 ```
  - He Borrado el segundo nodo pero como lo añadimos con front seria nuestro primer nodo en la lista
    y lo que pasa es que como es el primer nodo todo lo demas ya no nos lo muestra, depues de pasarle lst clear
    esta vez no da error y nos termina de limpiar lista
 ```bash
    **PRIMER NODO 
    Valor del nodo: El primero que añadi
    **APLICAMOS AÑADIR FRONT: 
    Valor del nodo: Añadido con front
    Valor del nodo: El primero que añadi
    **APLICAMOS AÑADIR BACK: 
    Valor del nodo: Añadido con front
    Valor del nodo: El primero que añadi
    Valor del nodo: Añadido con back 
    Numero de nodos : 3
    **Ultimo nodo de la lista(ft_lstlast): 
    Valor del nodo: Añadido con back 
    **Utilizamos lstdelone: 
    Numero de nodos : 1
    Valor del nodo: (null)
    **Utilizamos lstclear: 
    Numero de nodos : 0
  ```
  ### Caso 3 Borramos node3
  ```c
    ft_lstdelone(node3,&ft_del);
		printf("Numero de nodos : %i\n",ft_lstsize(lista));
		print_list(lista);
		ft_putstr_fd("**Utilizamos lstclear: \n",1);
		ft_lstclear(&lista,&ft_del);
		printf("Numero de nodos : %i\n",ft_lstsize(lista));
		print_list(lista);
		return 0;
  ```
  - Este es el caso donde todo sale a pedir de boca  al borrar el node 3 que tambien seria nuestro ultimo nodo en la lista sucede esto
  ```bash
  nakama@MacBook-Air-de-David libft % ./mi_programa                                 
  **PRIMER NODO 
  Valor del nodo: El primero que añadi
  **APLICAMOS AÑADIR FRONT: 
  Valor del nodo: Añadido con front
  Valor del nodo: El primero que añadi
  **APLICAMOS AÑADIR BACK: 
  Valor del nodo: Añadido con front
  Valor del nodo: El primero que añadi
  Valor del nodo: Añadido con back 
  Numero de nodos : 3
  **Ultimo nodo de la lista(ft_lstlast): 
  Valor del nodo: Añadido con back 
  **Utilizamos lstdelone: 
  Numero de nodos : 3
  Valor del nodo: Añadido con front
  Valor del nodo: El primero que añadi
  Valor del nodo: (null)
  **Utilizamos lstclear: 
  Numero de nodos : 0
  ```
  - Con lo cual  todo funciona como deberia ya que realmente Estamos borrando el contendido de content
- [subir](#Índice)
# Conclusiones De las listas
## Por fin he llegado a vislumbrar la luz de las listas
### Ya era hora 
- Vamos a ver como tengo mi main final
```c
void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		if (current->content != NULL)
		{
			printf("Valor del nodo: %s\n", (char *)current->content);
		}
		else
		{
			printf("Valor del nodo: (null)\n");
		}
		current = current->next;
	}
}

void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	//creamos strings asignandoles memoria con ft_strdup
  char *str = ft_strdup("El valor inicial:---EGUN ON----- Node 1");
	char *str2 = ft_strdup("Valor añadido como front:------- Node 2");
	char *str3 = ft_strdup("VALOR Añadido como back:-EGUN OF-Node 3");

// declaramos nuestros *nodos de la t_list
	t_list	*node;
	t_list	*node2;
	t_list	*node3;
	t_list	*lista;
	
	lista = NULL;
  //asignamos nuestros punteros acada nodo
	node  = ft_lstnew(str);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);

	ft_putstr_fd("**PRIMER NODO\n", 1);
	ft_lstadd_front(&lista, node);
	printf("Numero de nodos : %i\n", ft_lstsize(node));
	print_list(lista);
	ft_putstr_fd("**APLICAMOS AÑADIR FRONT: \n", 1);
	ft_lstadd_front(&lista, node2);
	printf("Numero de nodos : %i\n", ft_lstsize(node));
	print_list(lista);
	ft_putstr_fd("**APLICAMOS AÑADIR BACK: \n", 1);
	ft_lstadd_back(&lista, node3);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
	print_list(lista);
	ft_putstr_fd("**Ultimo nodo de la lista(ft_lstlast): \n", 1);
	print_list(ft_lstlast(lista));

  //vamos haciendo lstdelone de modo que siempre liberemos la memoria del ultimo en la lista
	ft_putstr_fd("**Utilizamos lstdelone: \n", 1);
	ft_lstdelone(node3, &ft_del);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
	print_list(lista);

	ft_putstr_fd("**Utilizamos lstdelone por segunda vez: \n", 1);
	ft_lstdelone(node, &ft_del);
	print_list(lista);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
	ft_putstr_fd("**Utilizamos lstdelone por tercera vez: \n", 1);
	ft_lstdelone(node2, &ft_del);
	print_list(lista);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));
  //list clear funciona
	ft_putstr_fd("**Utilizamos list clear: \n", 1);
	ft_lstclear(&lista, &ft_del);
	print_list(lista);
	printf("Numero de nodos : %i\n", ft_lstsize(lista));

	return (0);
}
```
- Y el output
```bash
nakama@MacBook-Air-de-David libft % ./mi_programa                                 
**PRIMER NODO 
Numero de nodos : 1
Valor del nodo: El valor inicial:---EGUN ON----- Node 1
**APLICAMOS AÑADIR FRONT: 
Numero de nodos : 1
Valor del nodo: Valor añadido como front:------- Node 2
Valor del nodo: El valor inicial:---EGUN ON----- Node 1
**APLICAMOS AÑADIR BACK: 
Numero de nodos : 3
Valor del nodo: Valor añadido como front:------- Node 2
Valor del nodo: El valor inicial:---EGUN ON----- Node 1
Valor del nodo: VALOR Añadido como back:-EGUN OF-Node 3
**Ultimo nodo de la lista(ft_lstlast): 
Valor del nodo: VALOR Añadido como back:-EGUN OF-Node 3
**Utilizamos lstdelone: 
Numero de nodos : 3
Valor del nodo: Valor añadido como front:------- Node 2
Valor del nodo: El valor inicial:---EGUN ON----- Node 1
Valor del nodo: (null)
**Utilizamos lstdelone por segunda vez: 
Valor del nodo: Valor añadido como front:------- Node 2
Valor del nodo: (null)
Numero de nodos : 2
**Utilizamos lstdelone por tercera vez: 
Valor del nodo: (null)
Numero de nodos : 1
**Utilizamos list clear: 
Numero de nodos : 0
```
## Lo que He Sacado de todo esto Despues de `ft_lstadd_back`, `ft_lstadd_front`,`ft_lstlast`,`ft_lstdelone`,`ft_lstnew`,`ft_lstsize`,`ft_lstclear` 
  - Primero : Si no borramos desde el final adelante tendremos problemas con esta lista asique 
  me doy cuenta que sigue el metodo LAST IN FIRST OUT , me recuerda a cuando era joven y estudiaba los diferentes tipos FiRST IN FIRST OUT . Comprender la importancia de seguir un orden específico al eliminar nodos, en este caso, siguiendo el principio LIFO (Last In, First Out) para evitar problemas al borrar nodos.

  - Segundo : Tener un Centinela como lista para luego pasarlo como direccion de memoria puede simplificar la lógica, evitando problemas al manipular la lista.
  - Tercero : Hacer hincapié en la eliminación segura de nodos, asegurandome de manejar correctamente la memoria para evitar errores de doble liberación o pérdida de memoria.
  - Cuarto : Manipulación de Nodos (Front y Back):
Entender la diferencia entre añadir nodos al frente y al final de la lista, y cómo estas operaciones afectan la estructura general de la lista.
  - Quinto : 
    - Desarrollo Iterativo:
Adoptar un enfoque iterativo en el desarrollo, probando y ajustando partes del código a medida que avanzo, para asegurarme de que cada componente funcione correctamente antes de avanzar.

- [subir](#Índice)
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
     #include "../libft.h"     ```

2. **Enlazado con la Biblioteca:**
   - Al compilar tu programa, asegúrate de enlazarlo con la biblioteca. Esto se hace generalmente añadiendo `-L.` y `-lft` al comando de compilación. Aquí hay un ejemplo:

     ```bash
     gcc -o mi_programa mi_programa.c -L. -lft
     ```

     Esto indica al compilador buscar la biblioteca en el directorio actual (`-L.`) y enlazarla (`-lft`).

3. **Ejecución del Programa:**
   - Ahora puedes ejecutar tu programa como de costumbre.
- [subir](#Índice)