#include "libft.h"

//primera parte por mucho que tenga putchar necesito putstring
//vamos a por ello dejamos este main para el recuerdo
int main()
{
	char str[]="HOLA123";
	char isnumber[]="\nCONTIENE NUMERO";
	char e= 'e';
	int n = ft_strlen(str);
	int i = 0;
	int ir = 0;
	int mayus = 0;
	
	ft_putstr_fd("String original ->",0);

	while (i<n)
	{
	ft_putchar_fd(str[i],0);
	i++;
	}
	ft_putstr_fd(" \n String convertido a minusculas:\n",0);
	while(ir < n)
	{
		ft_putchar_fd(ft_tolower(str[ir]),0);
		ir++;
	}
	ft_putstr_fd(" \n String convertido a mayus:\n",0);
	while(mayus < n)
	{
		ft_putchar_fd(ft_toupper(str[mayus]),0);
		mayus++;
	}
	return 0;
}