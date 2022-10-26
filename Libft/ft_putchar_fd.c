/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:52:03 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/26 16:55:31 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putchar_fd(char *s, int fd)
{
	int	l;
	int	i;

	i = 0;
	l = ft_strlen(s);
	while (s[i])
	{
		write(fd, &s[i], l);
		i++;
	}
}
