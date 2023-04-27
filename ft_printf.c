/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:11:23 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/27 20:46:45 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_formato(char c, va_list list)
{
	size_t	special;

		special = 0;
	if (c == 'c')
		special = ft_character(va_arg(list, int));
	else if (c == 's')
		special = ft_string(va_arg(list, char *));
	else if (c == 'p')
		special = ft_adress(va_arg(list, unsigned long));
	else if (c == 'd' || c == 'i' || c == 'u')
		special = ft_number(va_arg(list, int));
	else if (c == 'x')
		special = ft_hexa(va_arg(list, unsigned long), HEXALOW);
	else if (c == 'X')
		special = ft_hexa(va_arg(list, unsigned long), HEXAHIGH);
	if (c == '%')
		special = ft_character('%');
	return (special);
}

int	ft_printf(const char *param, ...)
{
	va_list	list;
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	va_start(list, param);
	while (param[i])
	{
		if (param[i] == '%')
			r += ft_formato(param[++i], list);
		else
			r += ft_character(param[i]);
		i++;
	}
	va_end(list);
	return (r);
}
