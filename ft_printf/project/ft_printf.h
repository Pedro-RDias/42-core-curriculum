/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:10:12 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/02 09:56:53 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

size_t	ft_strlen(const char *str);

int		ft_print_str(char *str);
int		ft_print_char(unsigned char c);
int		ft_print_number(long long n);
int		ft_print_unsigned_number(unsigned long long n);
int		ft_print_hex(unsigned int n, int uppercase);
int		ft_print_base(unsigned long long n, char *base);
int		ft_print_pointer(unsigned long long n);

#endif
