/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:24:42 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/29 16:26:42 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %p - the void
	* pointer argument has to be printed in hexadecimal format */
size_t	ft_adress(unsigned long int loc)
{
	int	i;

	i = 0;
	if (loc == 0)
		i += ft_string("(nil)");
	else
	{
		i += ft_string("0x");
		i += ft_hexa(loc, HEXALOW);
	}
	return (i);
}
