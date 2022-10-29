/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:00:37 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/16 17:38:25 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	m;

	m = ft_strlen(s);
	i = 0;
	while (i <= m)
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i++;
	}
	return (NULL);
}