#include "../libft.h"
  // Definir una función que utilice ft_putchar_fd
    void print_char_and_index(unsigned int index, char *c)
    {
        ft_putchar_fd(*c, 1);
        
    }

int main()
{
char str[] = "Hola que tal";
  
ft_putendl_fd(str,0);
ft_putendl_fd("nueva linea",0);
ft_striteri(str,print_char_and_index);

}