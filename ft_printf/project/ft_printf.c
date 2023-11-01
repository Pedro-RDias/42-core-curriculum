/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:10:18 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/01 20:52:08 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// cspdiuxX%
// You have to implement the following conversions:
// •%c Prints a single character.
// •%s Prints a string (as defined by the common C convention).
// •%p The void * pointer argument has to be printed in hexadecimal format.
// •%d Prints a decimal (base 10) number.
// •%i Prints an integer in base 10.
// •%u Prints an unsigned decimal (base 10) number.
// •%x Prints a number in hexadecimal (base 16) lowercase format.
// •%X Prints a number in hexadecimal (base 16) uppercase format.
// •%% Prints a percent sign.

int	ft_print_format(const char *format, va_list args)
{
	if (*format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*format == 's')
		return (ft_print_str(va_arg(args, char *)));
	// else if (*format == 'p')
	// 	return (ft_print_pointer(va_arg(args, unsigned long long)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_number(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_unsigned_number(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (*format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (*format == '%')
		return (ft_print_char('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (!(*format == '%'))
			count += ft_print_char(*format++);
		else
		{
			format++;
			count += ft_print_format(format++, args);
		}
	}
	va_end(args);
	return (count);
}
