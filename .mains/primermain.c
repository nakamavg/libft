#include "../libft.h" 

// primera parte por mucho que tenga putchar necesito putstring
// vamos a por ello dejamos este main para el recuerdo
int	main(void)
{
	char str[] = "HOLA123";
	char isnumber[] = "\nCONTIENE NUMERO";
	char e = 'e';
	int n = ft_strlen(str);
	int i = 0;
	int ir = 0;
	int c = 0;
	int mayus = 0;

	ft_putstr_fd("String original ->", 1);

	while (i < n)
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	ft_putstr_fd(" \n String convertido a minusculas:\n", 1);
	while (ir < n)
	{
		ft_putchar_fd(ft_tolower(str[ir]), 1);
		ir++;
	}
	ft_putstr_fd(" \n String convertido a mayus:\n", 1);
	while (mayus < n)
	{
		ft_putchar_fd(ft_toupper(str[mayus]), 1);
		mayus++;
	}
	ft_putstr_fd(" \n String Pasado por la funcion memcpy :\n", 1);
	// funcion de ft_memcpy a la que le pasamos memcpy para comprobar que hay llegado aqui
	// como la funcion devuelve un string podemos meterla dentro de ft_putstr_fd

	ft_putstr_fd(ft_memcpy(str, "memcpy", n), 1);
	ft_putstr_fd(" \n String Pasado por la funcion memset :\n", 1);
	// setea toda la longitud de str con el caracter a
	ft_memset(str, 'a', n); // n longitud de str
	ft_putstr_fd(str, 1);
	ft_putstr_fd(" \n String Pasado por la funcion bzero :\n", 1);
	// metemos todo ceros y hacemos el casting para imprimirlo por consola
	ft_bzero(str, n);
	while (c < n)
	{
		printf("%d", (int)str[c]);
		c++;
	}
	printf("\n");
	return (0);
}