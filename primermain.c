#include "libft.h"

//primera parte por mucho que tenga putchar necesito putstring
//vamos a por ello dejamos este main para el recuerdo
int main()
{
	char str[]="hola";
	char isnumber[]="\nCONTIENE NUMERO";
	char e= 'e';
	int n = ft_strlen(str);
	int i = 0;
	while (i<n)
	{
	ft_putchar_fd(str[i],0);

	if(ft_isalpha(str[i]) == 0)
	{
		write(1,"\nCONTIENE NUMERO",20);
	}
	i++;
	}
	return 0;
}