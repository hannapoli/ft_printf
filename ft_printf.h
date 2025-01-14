/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:06:25 by hpolishc          #+#    #+#             */
/*   Updated: 2025/01/14 11:24:42 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_put_char(char c);
int	ft_put_str(char const *str);
int	ft_put_ptr(void *ptr);
int	ft_put_di(int n);
int	ft_put_unsigned(unsigned int n);
int	ft_put_hex(unsigned int n, int case_xX);
int	ft_to_hex(unsigned long n, char *hex);
int	ft_type_check(char const type, va_list args);
int	ft_err_check(int t_check, va_list args);
int	ft_printf(char const *str, ...);

#endif