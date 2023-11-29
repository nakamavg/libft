/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:15:21 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:02:47 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	newstring = (char *)ft_calloc((len + 1), sizeof(char));
	if (!newstring)
		return (NULL);
	ft_memcpy(newstring, (void *)(s + start), len);
	newstring[len] = '\0';
	return (newstring);
}
