#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "BAD BUNNY BAD";
    char set[] = "BAD";
    
    char *newstr = ft_strtrim(str, set);
    
    if (newstr)
    {
        printf("%s\n", newstr);
        free(newstr); 
    }
    else
    {
        printf("Error en ft_strtrim\n");
    }

    return 0;
}
