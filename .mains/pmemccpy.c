#include "../libft.h"

int	main(void)
{
	char	Usuario[64] = "Texto de prueba ";
	char	character;
	char	*puntero;

	character = 'i';
	ft_putstr_fd(" Cadena origen ::: ", 0);
	ft_putstr_fd(Usuario, 0);
	ft_putstr_fd(":::Pasado por memccpy -->", 0);
	// como la funcion devuelve el puntero podemos usarlo para acceder a lo siguiente que apunta
	// la funcion va a cargarse todo lo que encuentre hasta que encuentre d o ocupe todo david
	// Recomiendo juguetar con la funcion  y ver todos los casos
	puntero = memccpy(Usuario, "David", character, ft_strlen("David"));
	// Si no encuentra el caracter la funcion va
	if (puntero != NULL)
	{
		ft_putstr_fd(Usuario, 0);
		printf("\n Caracter que apunta el puntero = %c.\n", *puntero);
		// recupero el puntero para imprimir lo que hay apartir de ahi
		ft_putstr_fd("\n Resto del string que apunta el puntero -->", 0);
		ft_putstr_fd(puntero, 0);
	}
	else
	{
		// char no se encontró en la cadena David
		ft_putstr_fd("Carácter no encontrado en la cadena David.\n", 0);
		ft_putstr_fd("Cadena Origen Actualizada \n", 0);
		ft_putstr_fd(Usuario, 0);
	}
	return (0);
}
