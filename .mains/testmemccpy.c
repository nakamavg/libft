#include "libft.h"

int main() {
    char src[] = "Hello, World!";
    char dst1[20];
    char dst2[20];
	//4horas por este MALDITO CABRON AL NO INICIALIZARLAS LES QUEDA
	//MIERDA
	//SE ARREGLA CON ESTO
    ft_bzero(dst)
    



    // Uso de la versión estándar de memccpy
    char *puntero1 = memccpy(dst1, src, 'd',ft_strlen(dst1));
    printf("Después de memccpy: %s\n", dst1);

    // Uso de mi versión de ft_memccpy
    char *puntero2 = ft_memccpy(dst2, src, 'd',ft_strlen(dst2));
    printf("Después de ft_memccpy: %s\n", dst2);

    // Imprimir el puntero devuelto por ambas funciones
    printf("Puntero devuelto por memccpy: %p\n", puntero1);
    printf("Puntero devuelto por ft_memccpy: %p\n", puntero2);

    // Imprimir el contenido completo de las áreas de memoria
    printf("Contenido de dst1: %s\n", dst1);
    printf("Contenido de dst2: %s\n", dst2);

    // Compara los resultados basándonos en el contenido de las cadenas
    if (strcmp(dst1, dst2) == 0) {
        printf("Dan el mismo array.\n");
    } else {
        printf("¡Hay diferencias!\n");
    }

    return 0;
}
