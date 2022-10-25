/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:13:44 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/17 15:13:14 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	l;

	j = 0;
	l = ft_strlen(src);
	if (dstsize < l)
		return (l);
	if (dstsize == 0)
		return(0);
	while (src[j] && l < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (l);
}
