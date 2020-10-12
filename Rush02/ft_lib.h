/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:17:00 by apopescu          #+#    #+#             */
/*   Updated: 2020/07/19 21:22:19 by gmorange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_checkarg(int argc, char **argv);
char	*ft_creatdic(void);
int		ft_checknumber(char *str, int nb);
char	*ft_strstrdic(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_error(void);
int		ft_strlen(char *str);
void	ft_print(char *str);

#endif
