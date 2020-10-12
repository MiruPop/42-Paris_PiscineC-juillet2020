/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:37:49 by gmorange          #+#    #+#             */
/*   Updated: 2020/07/19 21:18:50 by gmorange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_checknumber(char *str, int nb)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_error();
			return (0);
		}
		i++;
	}
	return (nb);
}

int		ft_checkarg(int argc, char **argv)
{
	if (argc == 2)
		return (ft_checknumber(argv[1], 1));
	else if (argc == 3 && ft_strcmp(argv[1], "numbers.dict") == 0)
		return (ft_checknumber(argv[2], 2));
	else
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
}
