# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/04 11:29:27 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/04 12:07:16 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -name '*.sh' -exec basename {} \; | sed 's/.sh$//'
