/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:47:48 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/27 18:00:58 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strrchr(const char *s, int c)
{
	char	*str1;
	size_t	len;
	
	// Inicializamos str1 antes de usarla
	str1 = (char *)s;

	// Como esta vez el man nos dice que devuelve un puntero
	// a la última vez que aparece el char, empezamos desde el final 
	len = ft_strlen(str1);

	// Estos dos if sirven para evitar entrar en el while y ahorrarnos
	// tiempo de ejecución del programa en estos casos
	// Comprobamos si es nulo para no tenernos que meter en el bucle
	if (c == '\0')
		return (str1 + len);

	// Condicional que devuelve el puntero del string si lo encuentra 
	// en la primera posición  	
	if (str1[0] == (char)c)
		return(str1);

	// Bucle donde buscamos el carácter de manera invertida 
	while (len != 0)
	{
		// Condicional que chequea el carácter y devuelve su posición
		if (str1[len] == (char)c)
			return (str1 + len);
		len--;
	}

	// Devuelve nulo 
	return (0);
}
