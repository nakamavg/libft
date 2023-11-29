#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char c = '2';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	return (0);
}