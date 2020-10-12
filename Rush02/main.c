/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:37:49 by gmorange          #+#    #+#             */
/*   Updated: 2020/07/19 21:17:50 by gmorange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_print(char *str)
{
	int i;

	i = 0;
	while ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		i++;
	while (str[i] != '\n')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*dic;

	i = ft_checkarg(argc, &*argv);
	if (i == 0)
		return (0);
	ft_print(ft_strstrdic(ft_creatdic(), argv[i]));
	dic = ft_creatdic();
	free(dic);
	return (0);
}
