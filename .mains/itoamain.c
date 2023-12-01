

int main(void)
{
	int number;
	char *str;

	// Número de ejemplo
	number = -1239402;
	// Llama a la función ft_itoa para convertir el número en una cadena
	str = ft_itoa(number);
	// Imprime el resultado
	if (str != NULL)
	{
		printf("Resultado: %s\n", str);

		// Comprobar si el terminador nulo está presente
		if (str[get_int_len(number)] == '\0')
		{
			printf("El terminador nulo está presente en la posición correcta.\n");
		}

		// Libera la memoria asignada para la cadena
		free(str);
	}
	return (0);
}