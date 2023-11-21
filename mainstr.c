#include "libft.h"
#include <stdio.h>
int main()
{	int a = 0;
	int f=0;
	char d[]="destino";
	char s[]="source";
	ft_putstr_fd(d,1);
	a=ft_strlcpy(d,s,7);
	ft_putstr_fd(d,1);
	printf("\n%d",a);
	f=strlcpy(d,s,7);
	printf("\n%d",f);

}