/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:58:10 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:02:28 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	x = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (str1[x] && str2[x] && (x < n - 1) && str1[x] == str2[x])
		x++;
	if (n > 0)
		return (str1[x] - str2[x]);
	else
		return (0);
}
