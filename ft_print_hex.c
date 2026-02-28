/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:00:51 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/28 21:03:23 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char c)
{
	char	*elems;
	int		count;

	count = 0;
	if (c == 'x')
		elems = "0123456789abcdef";
	else
		elems = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, c);
	count += ft_putchar(elems[n % 16]);
	return (count);
}
