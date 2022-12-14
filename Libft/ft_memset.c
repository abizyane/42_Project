/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:52:49 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/17 15:19:20 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t l)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < l)
	{	
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
