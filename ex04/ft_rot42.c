/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:26:47 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/13 22:11:20 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((int)str[i] < 91)
		{
			if ((int)str[i] >= 75)
				str[i] = str[i] - 10;
			else
				str[i] = str[i] + 16;
		}
		else
		{
			if ((int)str[i] >= 107)
				str[i] = str[i] - 10;
			else
				str[i] = str[i] + 16;
		}
		i++;
	}
	return (str);
}
