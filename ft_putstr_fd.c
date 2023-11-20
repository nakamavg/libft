/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakama <nakama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:10:12 by nakama            #+#    #+#             */
/*   Updated: 2023/11/20 04:17:31 by nakama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if (s)
	{
		while (s[counter] != '\0')
		{
			write(fd, &s[counter], 1);
			counter++;
		}
	}
}
