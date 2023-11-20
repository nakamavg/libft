/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakama <nakama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:41:06 by nakama            #+#    #+#             */
/*   Updated: 2023/11/20 02:47:58 by nakama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//inicalizacion de la libreria
#ifndef LIBFT_H
# define LIBFT_H //formra de llamar a la libreria externamente

# include <unistd.h>
//TODAS las llamadas a otras librerias
# include <stdlib.h>
//Desde aqui ya nos evita tener que llamarlas en los .C de las funciones
# include <string.h>

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);//filedescriptor o salida standar 
int	ft_isalpha(int c);//comprueba letras

//Cabeceras de las funciones que queremos incluir en la lib

#endif//Declaracion final de la libreria, "cerrarla"