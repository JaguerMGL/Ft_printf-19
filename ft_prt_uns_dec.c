/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_uns_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:43:27 by ndessard          #+#    #+#             */
/*   Updated: 2023/11/07 10:44:01 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prt_uns_dec(unsigned int nbr, int i)
{
	char	c;

	if (nbr > 9)
		i = ft_prt_dec(nbr / 10, i++);
	c = (char)(nbr % 10) + '0';
	write (1, &c, 1);
	i++;
	return (i);
}
