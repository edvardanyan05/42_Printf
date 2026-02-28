/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:05:44 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/28 21:02:01 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_print_str(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_print_hex(unsigned int n, char c);
int	ft_print_ptr(void *p);
#endif