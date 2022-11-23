/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:49:37 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/23 12:07:38 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putnbr_x(unsigned int n)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789ABCDEF";
	if (n > 15)
	{
		i += putnbr_x(n / 16);
		i += putnbr_x(n % 16);
	}
	else
		i += ft_putchar(s[n]);
	return (i);
}
