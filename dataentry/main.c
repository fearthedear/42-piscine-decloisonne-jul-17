/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amordret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:32:14 by amordret          #+#    #+#             */
/*   Updated: 2017/07/15 18:42:20 by amordret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error(void);

void	ft_data_entry(char **av);

int		main(int ac, char *av[])
{
	if (ac != 10)
		ft_error();
	else
		ft_data_entry(av);
	return(0);
}
