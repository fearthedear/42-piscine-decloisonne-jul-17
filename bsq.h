/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:19:25 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 03:14:55 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		**make_it_numbers(char *array, int height);
void	show(int **tab, int height);
void	fill(int **tab, int height);
int		transform(char src);
int		array_is_valid(char *str);
char	*ft_strcat(char *s1, char *s2);

#endif
