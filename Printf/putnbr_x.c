/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:42:01 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/26 18:53:17 by abizyane         ###   ########.fr       */
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
