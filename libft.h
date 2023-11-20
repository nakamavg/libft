/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakama <nakama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:41:06 by nakama            #+#    #+#             */
/*   Updated: 2023/11/20 01:00:04 by nakama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//inicalizacion de la libreria
#ifndef LIBFT_H
# define LIBFT_H //formra de llamar a la libreria externamente

# include <unistd.h>//TODAS las llamadas a otras librerias
# include <stdlib.h>//Desde aqui ya nos evita tener que llamarlas en los .C de las funciones
# include <string.h>

size_t	ft_strlen(const char *s);//Cabeceras de las funciones que queremos incluir en la lib

#endif//Declaracion final de la libreria, "cerrarla"