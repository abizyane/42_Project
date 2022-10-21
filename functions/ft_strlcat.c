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
	size_t	res;

	i = 0;
	l = ft_strlen(dst);
	if (dstsize == 0 && ft_strlen(dst) == 0)
		return (ft_strlen(src));
	if (dstsize <= l)
		res = ft_strlen(src) + dstsize;
	else
		res = ft_strlen(src) + l;
	while (src[i] && i < dstsize - 1)
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	dst[i] = '\0';
	return (res);
}
