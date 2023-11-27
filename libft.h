/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:41:06 by nakama            #+#    #+#             */
/*   Updated: 2023/11/26 04:25:48 by dgomez-m         ###   ########.fr       */
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
# include <stdio.h>

size_t	ft_strlen(const char *s);//Obtiene longitud
void	ft_putchar_fd(char c, int fd);//filedescriptor o salida standar 
int		ft_isalpha(int c);//comprueba letras
int		ft_isdigit(int c);//comprueba numeros
int		ft_isascii(int c);//comprueba que el estandar ascii
int		ft_isprint(int c);//comprueba que es printable
int		ft_isalnum(int c);//comprueba numeros y letras 
int		ft_tolower(int c);//pasa a minuscualas las mayusculas
int		ft_toupper(int c);// pasa a mayus las minus
void	ft_putstr_fd(char *s, int fd);//con filedescriptor
size_t	ft_strlcpy(char *dst, const char *src, size_t destsize);
void	ft_bzero(void *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);//
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_iscntrl(int c);//Copia de Ctype.h caracteres control
int		ft_atoi(const char *str);
int		ft_isspace(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

//Cabeceras de las funciones que queremos incluir en la lib

#endif//Declaracion final de la libreria, "cerrarla"