/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:50:24 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/26 19:07:05 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *arg, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	putnbr_u(unsigned int n);
int	putnbr_id(int n);
int	putnbr_hx(size_t n);
int	putnbr_x(unsigned int n);
int	putnbr_hxa(unsigned int n);

#endif
