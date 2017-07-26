/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:32:59 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/20 15:42:07 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(str[0]);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int	l;
	int i;

	i = 0;
	l = 0;
	while (tab[l] != NULL)
		l++;
	while (i < l)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
