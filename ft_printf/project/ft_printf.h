/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:10:12 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/03 09:25:48 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);

size_t	ft_strlen(const char *str);

int		ft_print_str(char *str);
int		ft_print_char(unsigned char c);
int		ft_print_number(long long n);
int		ft_print_unsigned_number(unsigned long long n);
int		ft_print_hex(unsigned long long n, int uppercase);
int		ft_print_base(unsigned long long n, char *base);
int		ft_print_pointer(unsigned long long n);

#endif
