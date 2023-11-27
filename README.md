# CREAR UNA Libreria en C

## Índice
- [CREAR UNA Libreria en C](#crear-una-libreria-en-c)
  - [Índice](#índice)
  - [Funciones Resueltas](#funciones-resueltas)
    - [libft.h](#libfth)
    - [Makefile](#makefile)
    - [ft\_strlen](#ft_strlen)
    - [ft\_putchar\_fd](#ft_putchar_fd)
    - [ft\_isascii](#ft_isascii)
    - [ft\_isdigit](#ft_isdigit)
    - [ft\_isalpha](#ft_isalpha)
    - [ft\_putstr\_fd](#ft_putstr_fd)
    - [ft\_isprint](#ft_isprint)
    - [ft\_isalnum](#ft_isalnum)
    - [ft\_tolower](#ft_tolower)
    - [ft\_toupper](#ft_toupper)
    - [ft\_strlcpy](#ft_strlcpy)
    - [ft\_bzero](#ft_bzero)
    - [ft\_strncmp](#ft_strncmp)
    - [ft\_memset](#ft_memset)
    - [ft\_memcpy](#ft_memcpy)
    - [ft\_memccpy](#ft_memccpy)
    - [ft\_atoi](#ft_atoi)
    - [ft\_memchar](#ft_memchar)
    - [ft\_memmove](#ft_memmove)

- [Verificación de Superposición de Regiones de Memoria](#verificación-de-superposición-de-regiones-de-memoria)
  - [Compilación de la Biblioteca](#compilación-de-la-biblioteca)
  - [Uso de la Biblioteca en un Programa](#uso-de-la-biblioteca-en-un-programa)
  - [Compilación de la Biblioteca](#compilación-de-la-biblioteca-1)
  - [Uso de la Biblioteca en un Programa](#uso-de-la-biblioteca-en-un-programa-1)
  - [Funciones Pendientes](#funciones-pendientes)
## Funciones Resueltas
  - SI clickas en enlace te llevara al codigo de mi funcion
  - Muchas veces me veras explicar funciones o mains en este readme y tambien habra enlace
  - a algunos de mis mains, recomiendo que juegues con ellos mejores los mios
  - Y si encuentras algo mal explicado o algo que no estes de acuerdo avisame porfavor.
  - Estamos todos aprendiendo.
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
  ### [ft_memmove](src/ft_memmove.c) 
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
## Funciones Pendientes


| Función      | Estado      | Explicación/Código |
|--------------|-------------|---------------------|
| ft_calloc    | ❌ Pendiente | -                   |
| ft_memmove   | ❌ Pendiente | -                   |
| ft_strcat    | ❌ Pendiente | -                   |
| ft_strchr    | ❌ Pendiente | -                   |
| ft_strdup    | ❌ Pendiente | -                   |
| ft_strlcat   | ❌ Pendiente | -                   |
| ft_strncat   | ❌ Pendiente | -                   |
| ft_strnstr   | ❌ Pendiente | -                   |
| ft_strrchr   | ❌ Pendiente | -                   |
| ft_strstr    | ❌ Pendiente | -                   |
- [subir](#Índice)
