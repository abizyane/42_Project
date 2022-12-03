/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:34:54 by abizyane          #+#    #+#             */
/*   Updated: 2022/12/03 16:30:02 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include<stdio.h>

void	*freeptr(char *s)
{
	if (s)
		free (s);
	s = NULL;
	return (s);
}

char	*readline(int fd, char *res)
{
	char	*str;
	int		i;

	i = 1;
	str = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!res)
		res = ft_calloc(1, sizeof(char));
	while (i > 0)
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i == 0)
			break ;
		else if (i < 0)
			return (freeptr(res), NULL);
		str[i] = '\0';
		res = ft_strjoin(res, str);
		if (findnl(str))
			break ;
	}
	return (freeptr(str), res);
}

char	*writeline(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str && str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		line = ft_calloc(i + 1, 1);
	i = 0;
	while (str && str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*savedata(char *res)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (res[i] && (res[i] != '\n'))
		i++;
	if (res[i] == '\n')
		i++;
	else if (res[i] == '\0')
		return (freeptr(res), NULL);
	j = 0;
	tmp = ft_calloc((ft_strlen(res) - i + 1), 1);
	if (!tmp)
		return (NULL);
	j = 0;
	while (res && res[i])
		tmp[j++] = res[i++];
	return (freeptr(res), tmp);
}

char	*get_next_line(int fd)
{
	static char	*res;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || (read (fd, line, 0) < 0)
		|| (fd > 10240))
		return (NULL);
	res = readline(fd, res);
	if (!res)
		return (NULL);
	line = writeline(res);
	res = savedata(res);
	return (line);
}
