/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:39:02 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:01:11 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destiny;
	unsigned char		character;
	size_t				i;

	i = 0;
	source = (const unsigned char *)src;
	destiny = (unsigned char *)dst;
	character = (unsigned char)c;
	while (i < n)
	{
		destiny[i] = source[i];
		if (source[i] == character)
		{
			return ((void *)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
