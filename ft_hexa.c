/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:24:26 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/29 16:25:47 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %x &&
	%X- prints a number in hexadecimal (base 16)
	low and highcase format */
size_t	ft_hexa(unsigned long n, char *hexa_case)
{
	if (n < 16)
		return (ft_character(hexa_case[n]));
	return (ft_hexa(n / 16, hexa_case) + ft_character(hexa_case[n % 16]));
}
