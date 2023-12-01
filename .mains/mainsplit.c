#include "../libft.h"

int main(void)
{
    char *input_string ="0 0 0 0 0 0 0 0 0";
    char **result = ft_split(input_string, ' ');

    if (result)
    {
        // Imprimir las subcadenas resultantes
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("Substring %d:%s\n", i + 1, result[i]);
        }

        // Liberar la memoria asignada para las subcadenas y el array
        for (int i = 0; result[i] != NULL; i++)
        {
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}