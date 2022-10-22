/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:34:02 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/21 21:37:36 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (i < n - 1) && s1[i] == s2[i])
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
		return (1);
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
		return (-1);
	return (0);
}
