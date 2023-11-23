/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:39:02 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/23 01:17:59 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void * dst, const void * src, int c, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;

	src2 = (const unsigned char *)src;
	dst2 = (unsigned char *)dst;
	if ((dst == NULL && src == NULL) || !n)
		return (dst);
	while (n > 0)
	{
		*dst2 = *src2;
		dst2++;
		src2++;
		n--;
	}
	return (dst);
}
