/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:11:33 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:02:05 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	lensdst;
	char	*newstring;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	lensdst = lens1 + lens2 + 1;
	if (!s1 || !s2)
		return (NULL);
	newstring = ft_calloc(sizeof(char), lensdst);
	if (!newstring)
		return (NULL);
	ft_memcpy(newstring, s1, lens1);
	ft_memcpy(newstring + lens1, s2, lens2);
	return (newstring);
}
