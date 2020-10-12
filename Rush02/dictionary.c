/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:37:49 by gmorange          #+#    #+#             */
/*   Updated: 2020/07/19 19:42:08 by apopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	*ft_strstrdic(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[j])
	{
		if (to_find[i] == str[j])
		{
			i++;
			j++;
		}
		else if (to_find[i] == '\0')
			return (&str[j - i]);
		else
		{
			i = 0;
			j++;
		}
	}
	return ("Error\n");
}

char	*ft_creatdic(void)
{
	int		i;
	int		fd;
	int		ret;
	char	*dic;

	i = 0;
	ret = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	while (read(fd, &dic, 1))
		i++;
	close(fd);
	if (!(dic = malloc(sizeof(dic) * (i + 1))))
		return (0);
	fd = open("numbers.dict", O_RDONLY);
	ret = read(fd, dic, i);
	dic[ret + 1] = '\0';
	close(fd);
	return (dic);
}
