#include "libft.h"
#include <stdio.h>
int main() {
    char Gerardo[] = "Gerardo";
    char David[] = "David";

    // Copiar desde David hasta encontrar 'x' o hasta el final de David
    char *puntero = memccpy(Gerardo, David, 'x', sizeof(David));

    if (puntero != NULL) {
        // 'x' se encontró antes de copiar toda la cadena David
        size_t longitud_copiada = puntero - Gerardo - 1;  // Excluir el carácter 'x'
        printf("Copia completa: %.*s\n", (int)longitud_copiada, Gerardo);
    } else {
        // 'x' no se encontró en la cadena David
        printf("Carácter 'x' no encontrado en la cadena David.\n");
    }
	
	printf("%s.\n",Gerardo);


    return 0;
}
