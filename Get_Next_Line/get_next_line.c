/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:45:03 by abizyane          #+#    #+#             */
/*   Updated: 2022/12/02 17:53:05 by abizyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include<stdio.h>

char	*joinnewbuff(char *res, char *str)
{
	char	*tmp;

	tmp = ft_strjoin(res, str);
	free (res);
	return (tmp);
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
			return (free (res),free (str), NULL);
		str[i] = '\0';
		res = joinnewbuff(res, str);
		if (findnl(str))
			break ;
	}
	return (free (str), res);
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
		return (free (res), NULL);
	j = 0;
	tmp = ft_calloc((ft_strlen(res) - i + 1), 1);
	if (!tmp)
		return (NULL);
	j = 0;
	while (res && res[i])
		tmp[j++] = res[i++];
	return (free (res), tmp);
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
