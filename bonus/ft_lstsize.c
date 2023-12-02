/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 06:30:36 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/02 06:39:19 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
int	count;

count = 0;
//PARA ITERAR A LO LARGO DE UNA LISTA
	while (lst != NULL) 
	{
		count++;
		lst = lst->next;//esto seria un index/i  en arrays array[i] o *p+`
	}
return (count);
}