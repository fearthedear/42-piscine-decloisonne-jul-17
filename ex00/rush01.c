/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:54:20 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/08 15:55:57 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int g_y = 0;

void	ft_assignchar(int row, char *s, char *m, char *e)
{
	if (row == 0)
	{
		*s = '/';
		*m = '*';
		*e = '\\';
	}
	else if (row < g_y - 1)
	{
		*s = '*';
		*m = ' ';
		*e = '*';
	}
	else
	{
		*s = '\\';
		*m = '*';
		*e = '/';
	}
}

void	ft_putsingle(int x, char s)
{
	if (x == 1)
		ft_putchar(s);
	ft_putchar('\n');
}

void	ft_putrow(int x, int row)
{
	int		a;
	char	s;
	char	m;
	char	e;

	ft_assignchar(row, &s, &m, &e);
	a = x - 2;
	if (x > 1)
	{
		ft_putchar(s);
		while (a > 0)
		{
			ft_putchar(m);
			a--;
		}
		ft_putchar(e);
		ft_putchar('\n');
	}
	else
		ft_putsingle(x, s);
}

void	rush(int x, int y)
{
	int a;

	g_y = y;
	a = 0;
	if (x > 0 && g_y > 0)
	{
		while (a < g_y)
		{
			ft_putrow(x, a);
			a++;
		}
	}
}
