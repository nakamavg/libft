# CREAR UNA Libreria en C

## Índice
- [CREAR UNA Libreria en C](#crear-una-libreria-en-c)
  - [Índice](#índice)
    - [libft.h](#libfth)
    - [Makefile](#makefile)
    ### Primera Parte Obligatoria
  - [`ft_strlen`](#ft_strlen)
     [`ft_isascii`](#ft_isascii)
    [`ft_isdigit`](#ft_isdigit)
     [`ft_isalpha`](#ft_isalpha)
    [`ft_isprint`](#ft_isprint)
    [`ft_isalnum`](#ft_isalnum)
     [`ft_tolower`](#ft_tolower)
    [`ft_toupper`](#ft_toupper)
    [`ft_strlcpy`](#ft_strlcpy)
     [`ft_bzero`](#ft_bzero)
     [`ft_strncmp`](#ft_strncmp)
    [`ft_memset`](#ft_memset)
     [`ft_memcpy`](#ft_memcpy)
     [`ft_memccpy`](#ft_memccpy)
     [`ft_atoi`](#ft_atoi)
     [`ft_memchar`](#ft_memchar)
    - [`ft_memmove`](#ft_memmove)
    [`ft_memcmp`](#ft_memcmp)
    - [`ft_strchr` y `ft_strrchr`](#ft_strchr-y-ft_strrchr)
- [Implementación de la función `memmove` en C](#implementación-de-la-función-memmove-en-c)
- [Verificación de Superposición de Regiones de Memoria](#verificación-de-superposición-de-regiones-de-memoria)
  - [`ft_memcpm`](#ft_memcpm)
  [`ft_strnstr`](#ft_strnstr)
    [`ft_calloc`](#ft_calloc)
    [`ft_strdup`](#ft_strdup)
    ### Segunda Parte Obligatoria
    - [`ft_substr`](#ft_substr)
    [`ft_putstr_fd`](#ft_putstr_fd)
    [`ft_putchar_fd`](#ft_putchar_fd)
    [`ft_strjoin`](#ft_strjoin)
    


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
    - Hace lo mismo que memcopy lo malo es que memcopy puede tener compartamiento indefinido cuando
      dos areas de memoria se sopan como en este ejemplo 
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
## [ft_memcpm](src/ft_memcmp) 
  - ✔️ OK  
  - **Explicacion** 
    - Devuelve la diferencia si los 2 strings son diferentes o 0 si son iguales
  - [subir](#Índice)

## [ft_strchr](src/ft_strchr.c) y [ft_strrchr](src/ft_strrchr.c)
  - ✔️ OK  
  - **Explicacion** Son dos funciones muy parecidas.
    - La diferencia es que `ft_strchr` devuelve un puntero al primer char que igual al que le metamos para comparar y `ft_strrchr` lo devuelve al ultimo 
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
	size_t 	index;
	int		len_search;
	char	*str;
	char	*search_string;
	//COMPROBACION DE AGUJA VACIA
	if (*needle == '\0')
		return((char *)haystack);
	//ASIGNACION 
	str = (char *)haystack;
	search_string = (char *)needle;
	index = 0;
	//longitud de la palabra a buscar
	len_search = ft_strlen(search_string);
	while(str[index] != '\0' && (index + len_search ) <= len)
	{
		//CONDICIONAL que comprueba si son iguales con la funcion ft_strncmp
		//index por index; y gracias a la longit de la palabra recorre justamente
		// lo que tendria que ser igual 
		if (ft_strncmp((str + index), search_string,len_search) == 0)
		{
			return (str + index);
		}
		index++;
	}
	return(NULL);
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
  - ESTO funciona 
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
  En principio este codidgo funciona pero nos da errores  hay que mejorarlo


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


  - [subir](#índice)
  ### [ft_strjoin](src/ft_strjoin.c) 
  - ✔️ OK  
  - **Explicación:** UNE DOS STRING USANDO  MALLOC
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