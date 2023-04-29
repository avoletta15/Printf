/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:22:53 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/29 16:25:53 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %d || %i || %u - prints a decimal (base 10) number */
int	ft_number(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_string("-2147483648"));
	if (n < 0)
	{
		i += ft_character('-');
		i += ft_number(-n);
	}
	else if (n > 9)
	{
		i += ft_number((n / 10));
		i += ft_number((n % 10));
	}
	else
		i += ft_character((n + '0'));
	return (i);
}
