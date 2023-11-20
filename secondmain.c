#include "libft.h"

//MAIN actualizado con putstr
int main()
{
	char str[]="hola1";
	char isnumber[]="\nCONTIENE NUMERO";
	char isalpha[]="\nCONTIENE letra";

	int n = ft_strlen(str);
	int i = 0;
	
	ft_putstr_fd(str,1);
	while (i <=n)
	{
	if(ft_isalpha(str[i]) == 1)
	{
		ft_putstr_fd(isalpha,1);
	}
	if(ft_isdigit(str[i]) == 1)
	{
		ft_putstr_fd(isnumber,1);
	}
	i++;
	}
	return 0;
}