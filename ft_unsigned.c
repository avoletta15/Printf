/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:24:08 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/29 16:26:14 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %u - prints a unsigned decimal (base 10) number */
int	ft_unsigned_number(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_unsigned_number((n / 10));
		i += ft_unsigned_number((n % 10));
	}
	else
		i += ft_character((n + 48));
	return (i);
}
