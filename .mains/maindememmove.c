
#include "libft.h"

int main() {
    char str[] = "HERMANITO";
    char str_copy_memcpy[5];
    char str_copy_memmove[5];
    char str_copy_ftmemmove[5];

    // Uso de memcpy con solapamiento
    // memcpy(str_copy_memcpy,str,10);
    // printf("Resultado con memcpy y solapamiento: %s\n", str_copy_memcpy);

    // Uso de memmove con solapamiento
    // memmove(str_copy_memmove,str,10);
    // printf("Resultado con memmove y solapamiento: %s\n", str_copy_memmove);

    // uso de mi memmove con solapmiento
    ft_memmove(str_copy_ftmemmove,str,10);
    printf("\nResultado con memmove y solapamiento: %s\n", str_copy_ftmemmove);

    return 0;
}
