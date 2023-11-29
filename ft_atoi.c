/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 04:10:29 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/29 22:00:02 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			count;
	long int	num;
	long int	sign;

	count = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[count]))
		count++;
	if ((str[count] == '-' ) && ft_isdigit(str[count +1]))
		sign = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (ft_isdigit(str[count]))
	{
		num = num * 10 + (int)(str[count] - '0');
		if (num * sign > 2147483647)
			return (-1);
		if (num * sign < -2147483648)
			return (0);
		count++;
	}
	return (num * sign);
}
