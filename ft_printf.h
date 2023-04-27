/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:01:33 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/27 20:48:00 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# define HEXAHIGH "0123456789ABCDEF"
# define HEXALOW "0123456789abcdef"
# include <stdarg.h>
# include <unistd.h>

int		ft_character(char c);
size_t	ft_string(char *str);
int		ft_number(int n);
size_t	ft_hexa(unsigned long n, char *hexa_case);
size_t	ft_adress(unsigned long ptr);
int		ft_printf(const char *param, ...);

#endif