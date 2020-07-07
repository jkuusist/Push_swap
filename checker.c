/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:49:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/06 11:51:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char *s;
	int ret;

	ret = 1;
	while (ret != 0)
	{
		ret = get_next_line(0, &s);
		if (ret == 1)
		{
			//DO STUFF WITH THE READ COMMAND
			ft_printf("%s\n", s);
		}
	}

	return (0);
}
