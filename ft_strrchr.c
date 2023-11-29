/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:47:48 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:02:40 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str1;
	int		len;

	str1 = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return (str1 + len);
	while (len != 0)
	{
		if (str1[len] == (char)c)
			return (str1 + len);
		len--;
	}
	if (s[0] == (char)c)
		return (str1);
	return (0);
}
