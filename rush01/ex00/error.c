/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amordret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:33:38 by amordret          #+#    #+#             */
/*   Updated: 2017/07/16 11:12:04 by amordret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_error(void)
{
	char c;

	c = '\n';
	write(1, "Error", 5);
	write(1, &c, 1);
	return (99);
}
