#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int main ()
{
	char c[] = "\n127";
	printf("%d\n", ft_isprint(c[0]));
	printf("%d\n", isprint(c[0]));
	return 0;
}