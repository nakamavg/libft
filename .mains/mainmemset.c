#include "../libft.h"
int main()
{
	
	char str1[5] ="hola";
	char str2[3] = "11";
    size_t length1 = strlen(str1);
	size_t length2 = strlen(str2);
  
    


    printf("\nFunción ft_memset\n");
    printf("------------------\n");
    printf("str1 antes de enviarlo a 'memset': %s\n", str1);
    ft_memset(str1, 'x', length1);
    printf("str1 después de enviarlo a 'memset': %s\n\n", str1);

     printf("str2 antes de enviarlo a 'memset': %s\n", str2);
     ft_memset(str2, 'z', length2);
    printf("str2 después de enviarlo a 'memset': %s\n\n", str2);
}