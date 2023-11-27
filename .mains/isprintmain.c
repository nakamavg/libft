#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char c[] = "\n127";
	printf("%d\n", ft_isprint(c[0]));
	printf("%d\n", isprint(c[0]));
	return (0);
}