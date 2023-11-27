#include "../libft.h"

int	main(void)
{
	const char	*str1 = "Hello, World!";
	const char	*str2 = "Hello, C!";
	size_t		n;
	int			result;

	n = 8;
	result = ft_strncmp(str1, str2, n);
	if (result == 0)
	{
		printf("Las primeras %zu letras son iguales.\n", n);
	}
	else if (result < 0)
	{
		printf("Las primeras
			%zu letras de la cadena \"%s\" son menores que las de la cadena \"%s\".\n",
			n, str1, str2);
	}
	else
	{
		printf("Las primeras
					% zu letras de la cadena \"%s\" son mayores que las de la cadena \"%s\".\n",
				n,
				str1,
				str2);
	}
	return (0);
}
