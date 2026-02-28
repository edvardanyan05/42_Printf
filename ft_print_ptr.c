/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 20:02:19 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/28 20:20:43 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_p(unsigned long addres)
{
	int		count;
	char	*elems;

	count = 0;
	elems = "0123456789abcdef";
	if (addres >= 16)
		count += print_hex_p(addres / 16);
	count += ft_putchar(elems[addres % 16]);
	return (count);
}

int	ft_print_ptr(void *p)
{
	int				count;
	unsigned long	addres;

	if (!p)
		return (write(1, "(nil)", 5));
	addres = (unsigned long)p;
	count = write(1, "0x", 2);
	count += print_hex_p(addres);
	return (count);
}
