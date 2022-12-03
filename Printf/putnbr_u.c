/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:25:46 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/26 18:55:55 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putnbr_u(unsigned int n)
{
	int	l;

	l = 0;
	if (n >= 10)
	{
		l += putnbr_u(n / 10);
		l += putnbr_u(n % 10);
	}
	else
		l += ft_putchar(n + '0');
	return (l);
}
