/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 20:31:53 by apopescu          #+#    #+#             */
/*   Updated: 2020/07/05 21:43:52 by apopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int h;

	if (x < 0 || y < 0)
		return ;
	h = 0;
	while (h < y)
	{
		l = 0;
		while (l < x)
		{
			if ((l == 0 && h == 0) || (l == x - 1 && h == y - 1))
				ft_putchar('/');
			else if ((l == 0 && h == y - 1) || (l == x - 1 && h == 0))
				ft_putchar('\\');
			else if (l == 0 || l == x - 1 || h == 0 || h == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		h++;
	}
}
