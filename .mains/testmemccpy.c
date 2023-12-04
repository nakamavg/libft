#include "../libft.h"

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dst1[20];
	char	dst2[20];
	char	*puntero1;
	char	*puntero2;


	// Uso de la versión estándar de memccpy
	puntero1 = memcpy(dst1, src, 20);
	printf("Después de memccpy: %s\n", dst1);
	// Uso de mi versión de ft_memccpy
	puntero2 = ft_memcpy(dst2, src, 20);
	printf("Después de ft_memccpy: %s\n", dst2);
	// Imprimir el puntero devuelto por ambas funciones
	printf("Puntero devuelto por memccpy: %p\n", puntero1);
	printf("Puntero devuelto por ft_memccpy: %p\n", puntero2);
	// Imprimir el contenido completo de las áreas de memoria
	printf("Contenido de dst1: %s\n", dst1);
	printf("Contenido de dst2: %s\n", dst2);
	// Compara los resultados basándonos en el contenido de las cadenas
	if (ft_memcmp(dst1, dst2,20) == 0)
	{
		printf("Dan el mismo array.\n");
	}
	else
	{
		printf("¡Hay diferencias!\n");
	}
	return (0);
}
