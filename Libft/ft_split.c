/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:34:25 by abizyane          #+#    #+#             */
/*   Updated: 2022/10/28 21:39:15 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	countst(char const *str, char c)
{
	size_t	l;
	size_t	k;

	l = 0;
	k = 0;
	while (str[k])
	{
		while (str[k] == c)
			k++;
		if (str[k] != c && str[k])
		{
			l++;
			while (str[k] != c && str[k])
				k++;
		}
	}
	return (l);
}

void	free_tab(char **s, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	**str;

	i = 0;
	x = countst(s, c);
	str = ft_calloc(x + 1, sizeof(char *));
	if (!str)
		return (NULL);
	x = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				i++;
				j++;
			}
			str[x] = ft_substr(s, i - j, j);
			if (str[x] == NULL)
			{
				free_tab(str, x);
				return (NULL);
			}
			x++;
		}
	}
	return (str);
}
