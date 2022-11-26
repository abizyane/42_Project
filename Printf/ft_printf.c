/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:53:18 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/26 16:01:12 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	checkfs(char c, va_list p)
{
	int	l;

	l = 0;
	if (c == 'c')
		l += ft_putchar(va_arg(p, int));
	else if (c == 's')
		l += ft_putstr(va_arg(p, char *));
	else if (c == 'd' || c == 'i')
		l += putnbr_id(va_arg(p, int));
	else if (c == 'u')
		l += putnbr_u(va_arg(p, unsigned int));
	else if (c == 'x' || c == 'p')
	{
		if (c == 'p')
			l += write (1, "0x", 2);
		l += putnbr_hx(va_arg(p, size_t));
	}
	else if (c == 'X')
		l += putnbr_x(va_arg(p, unsigned int));
	else if (c == '%')
		l += write (1, "%", 1);
	return (l);
}

int	ft_printf(const char *arg, ...)
{
	int		len;
	int		i;
	va_list	p;

	len = 0;
	i = 0;
	va_start(p, arg);
	while (arg[i])
	{
		if (arg[i] == '%' && arg[i + 1])
			len += checkfs(arg[++i], p);
		else if (arg[i] == '%')
			break ;
		else
			len += write (1, &arg[i], 1);
		i++;
	}
	va_end(p);
	return (len);
}
