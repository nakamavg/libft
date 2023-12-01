#include "../libft.h"
char	mapi(unsigned int i, char c)
{
	if(c >= 'a' && c <= 'z')
        return (c - 32);
    return(c);
}
int main()
{
    // Cadena de ejemplo
    const char *input_string = "Hello, World!";

    // Aplicar ft_strmapi con la función ft_toupper
    char *result = ft_strmapi(input_string,&mapi);

    // Imprimir la cadena resultante
    if (result != NULL)
    {
        printf("Original: %s\n", input_string);
        printf("Transformada a mayúsculas: %s\n", result);

        // Liberar la memoria asignada
        free(result);
    }
    else
    {
        printf("Error en la asignación de memoria.\n");
    }

    return 0;
}