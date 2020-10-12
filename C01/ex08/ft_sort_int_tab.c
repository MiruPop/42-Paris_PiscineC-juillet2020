/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:19:27 by apopescu          #+#    #+#             */
/*   Updated: 2020/07/15 20:06:11 by apopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	finish;
	int swing;

	i = 0;
	while (i < size)
	{
		swing = tab[i];
		if (tab[i] > tab[i + 1])
		{
			finish = 0;
			tab[i] = tab[i + 1];
			tab[i + 1] = swing;
		}
		i++;
		finish++;
	}
	if (finish < size)
		ft_sort_int_tab(tab, size);
	else
		return ;
}
