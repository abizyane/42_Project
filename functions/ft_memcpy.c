/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:30:14 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/17 15:18:47 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (d[i])
	{
		while (s[j] && i < n)
		{
			d[i] = s[j];
			j++;
			j++;
		}
		i++;
	}
	return (dst);
}
