/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:47:31 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 13:36:26 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_putchar(char c);
int	ft_strlen(char *str);
int	ft_limit(long long nbr, int i);
int	ft_hexa(void *ptr, int i, char c);
int	ft_printf(const char *str, ...);
int	ft_prt_ch(char c);
int	ft_prt_str(char *str);
int	ft_prt_dec(long long nbr, int i);
int	ft_prt_uns_dec(unsigned int nbr, int i);
int	ft_prt_lhex(unsigned long nbr, int i, char c);
int	ft_prt_ihex(unsigned int nbr, int i, char c);

#endif