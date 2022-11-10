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

	i = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		else
			i++;
	}
	return (NULL);
}
