#include "../libft.h"
#include <stdio.h>
#include <string.h>

// Testeo de la función ft_memchr y memchr
int main(void)
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

    // Caso adicional: Carácter no encontrado
    char *noEncontrado_ft = ft_memchr(str, 'z', 5);
    char *noEncontrado_std = memchr(str, 'z', 5);
    printf("\n ft_memchr - Dirección apuntada por 'noEncontrado': %p", (void *)noEncontrado_ft);
    printf("\n memchr   - Dirección apuntada por 'noEncontrado': %p", (void *)noEncontrado_std);

    // Caso adicional: Búsqueda en una cadena vacía
    char strVacia[] = "";
    char *enCadenaVacia_ft = ft_memchr(strVacia, 'a', 0);
    char *enCadenaVacia_std = memchr(strVacia, 'a', 0);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaVacia': %p", (void *)enCadenaVacia_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaVacia': %p", (void *)enCadenaVacia_std);

    // Caso adicional: Búsqueda en una cadena corta
    char strCorta[] = "abc";
    char *enCadenaCorta_ft = ft_memchr(strCorta, 'b', 2);
    char *enCadenaCorta_std = memchr(strCorta, 'b', 2);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaCorta': %p", (void *)enCadenaCorta_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaCorta': %p", (void *)enCadenaCorta_std);

    // Caso adicional: Búsqueda de un carácter nulo
    char *nuloEncontrado_ft = ft_memchr(str, '\0', 5);
    char *nuloEncontrado_std = memchr(str, '\0', 5);
    printf("\n ft_memchr - Dirección apuntada por 'nuloEncontrado': %p", (void *)nuloEncontrado_ft);
    printf("\n memchr   - Dirección apuntada por 'nuloEncontrado': %p", (void *)nuloEncontrado_std);

    // Caso adicional: Búsqueda en una cadena más larga
    char strLarga[] = "This is a longer string.";
    char *enCadenaLarga_ft = ft_memchr(strLarga, 'r', 20);
    char *enCadenaLarga_std = memchr(strLarga, 'r', 20);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaLarga': %p", (void *)enCadenaLarga_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaLarga': %p", (void *)enCadenaLarga_std);

    // Caso adicional: Búsqueda en una cadena completa
    char strCompleta[] = "fullstring";
    char *enCadenaCompleta_ft = ft_memchr(strCompleta, 'g', 11);
    char *enCadenaCompleta_std = memchr(strCompleta, 'g', 11);
    printf("\n ft_memchr - Dirección apuntada por 'enCadenaCompleta': %p", (void *)enCadenaCompleta_ft);
    printf("\n memchr   - Dirección apuntada por 'enCadenaCompleta': %p", (void *)enCadenaCompleta_std);

    return 0;
}
