# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_group.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/04 11:01:55 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/05 17:16:37 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

groups $FT_USER | tr ' ' ',' | tr -d '\n'
