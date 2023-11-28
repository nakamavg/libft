#include "../libft.h"
#include <stdio.h>

int main() {
    char string[] = "";
    char *substr_result = ft_substr(string , 10 , 10);

    // Imprimir los caracteres de la cadena resultante y detectar el carácter nulo ('\0')
    for (int i = 0; substr_result[i] != '\0'; ++i) {
        printf("%c", substr_result[i]);
        if (substr_result[i + 1] != '\0') {
            printf(" ");
        } else {
            printf("\\0");
        }
    }

    // Liberar la memoria asignada por ft_substr
    free(substr_result);

    return 0;
}
