/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:49:13 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/01 20:09:48 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	if (n < 0)
	{
		ft_print_char('-');
		return (1 + ft_print_base((unsigned long long)(n * -1), "0123456789"));
	}
	return (ft_print_base(n, "0123456789"));
}

int	ft_print_unsigned_number(unsigned long long n)
{
	return (ft_print_base(n, "0123456789"));
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	if (uppercase)
		return (ft_print_base(n, "0123456789ABCDEF"));
	else
		return (ft_print_base(n, "0123456789ABCDEF"));
}

int	ft_print_base(unsigned long long n, char *base)
{
	int		len;
	size_t	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
		len += ft_print_base(n / base_len, base);
	len += ft_print_char(base[n % base_len]);
	return (len);
}
