/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_hx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:36:57 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/23 12:02:43 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putnbr_hx(size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789abcdef";
	if (n > 15)
	{
		i += putnbr_hx(n / 16);
		i += putnbr_hx(n % 16);
	}
	else
		i += ft_putchar(s[n]);
	return (i);
}
