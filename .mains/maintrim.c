#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hola que tal Hola";
    char set[] = "hola";
    
    char *newstr = ft_strtrim(str, set);
    
    if (newstr)
    {
        printf("%s\n", newstr);
        free(newstr); // Asegúrate de liberar la memoria asignada por ft_strtrim
    }
    else
    {
        printf("Error en ft_strtrim\n");
    }

    return 0;
}
