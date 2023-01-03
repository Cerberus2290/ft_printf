/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:27:02 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/02 08:24:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

size_t	ft_strlen(const char *c);
int		ft_strchr(char *c, char d);
int		ft_hexlen(int i);
int		ft_intlen(int i);
int		ft_unsignedintlen(unsigned int i);
int		ft_convers_hexa(size_t n);
int		ft_convers_hexaupper(unsigned int n);
int		ft_convers_voidp(va_list arg);
int		ft_convers_u(va_list arg);
void	ft_unsignedputnbr_fd(unsigned int i, int fd);
int		ft_printf(const char *format, ...);
int		ft_convers_c(va_list arg);
int		ft_convers_s(va_list arg);
int		ft_convers_di(va_list arg);
int		ft_convers_x(va_list arg);
int		ft_convers_cx(va_list arg);
int		ft_choose_convers(va_list arg, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_putnbr_fd(int i, int fd);
#endif
