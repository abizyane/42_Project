/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_hxa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:59:32 by abizyane          #+#    #+#             */
/*   Updated: 2022/11/26 19:05:45 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putnbr_hxa(unsigned int n)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789abcdef";
	if (n > 15)
	{
		i += putnbr_hxa(n / 16);
		i += putnbr_hxa(n % 16);
	}
	else
		i += ft_putchar(s[n]);
	return (i);
}
