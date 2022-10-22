/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:21:18 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/18 18:15:58 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char *)s;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		else
			i++;
	}
	return (0);
}
