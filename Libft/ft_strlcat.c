/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:26:40 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/18 22:08:57 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	x;

	i = 0;
	l = ft_strlen(dst);
	x = l;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= x)
		return (ft_strlen(src) + dstsize);
	while (src[i] && x < dstsize - 1)
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (ft_strlen(src) + l);
}
