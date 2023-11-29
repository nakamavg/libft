/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:03:00 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:02:34 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*BUSCAR LA AGUJA EN UN PAJAR
	POR EJEMPLO ft_strstr("gerardo david ivan  jesus mikel","david")
	busca la aguja david en el pajar y el puntero resultante
	seria david ivan jesus mikel
	ideas aproximacion  bucle que hace stnrcmp cada posicion en el
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	int		len_search;
	char	*str;
	char	*search_string;

	if (*needle == '\0')
		return ((char *)haystack);
	str = (char *)haystack;
	search_string = (char *)needle;
	index = 0;
	len_search = ft_strlen(search_string);
	while (str[index] != '\0' && (index + len_search) <= len)
	{
		if (ft_strncmp((str + index), search_string, len_search) == 0)
		{
			return (str + index);
		}
		index++;
	}
	return (NULL);
}
