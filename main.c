/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 02:43:26 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 10:10:05 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE + 1];
	char	*str;
    char    *str_no_information;
	char 	*finalstring;
	int		ret;
	int 	**tab;
    ptr     head;
    int     n;
    char    ch;

	i = 1;

	if (argc == 1)
	{
        head = NULL;
        n = 0;
        while(read(0, &ch, 1) > 0)
        {
            insert(&head, ch);
            n++;
        }
        str = (char*)malloc(sizeof(char) * (n + 1));
        fill_str(head, str);
        ft_putstr(str);
	}
	while (i < argc)
	{
        n = 0;
        head = NULL;
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			ft_putstr("opening file failed\n");//display error, open failed
		//read file
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
            insert(&head, buf[0]);
            n++;
		}
        str = (char*)malloc(sizeof(char) * (n + 1));
        fill_str(head, str);
        freelist(&head);
        ft_putstr("input map is this:\n");
        ft_putstr(str);
        str_no_information = (char*)malloc(sizeof(char) * ft_strlen(str));
        str_no_information = get_information(str);
        if (ft_strcmp(str_no_information, "error") != 0)
        {
            make_it_numbers(&tab, str_no_information, g_height, 1);
            find_biggest(tab, str_no_information);
			free(tab);
			make_it_numbers(&tab, str_no_information, g_height, 0);
            finalstring = transform_to_string(tab, g_pos, g_dim);
            ft_putstr(finalstring);
			free(tab);
        }
        free(str);
        if (close(fd) == -1)
            ft_putstr("closing failed\n");
		i++;
	}
	return (0);
}
