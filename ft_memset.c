/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:39:53 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:01:39 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function writes len bytes of value c 
//(converted to an unsigned char) to the string b.
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
