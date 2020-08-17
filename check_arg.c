/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:47:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/14 12:47:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <limits.h>

int	check_arg(char *arg)
{
	int			i;
	long long	temp;

	if (arg[0] == '-')
		i = 1;
	else
		i = 0;
	while (arg[i])
	{
		if (!ft_strcmp(arg, "-v"))
		{
			i++;
			continue;
		}
		else if (!(ft_isdigit(arg[i])))
			return (0);
		i++;
	}
	temp = ft_atoi(arg);
	if ((temp > INT_MAX) || (temp < INT_MIN))
		return (0);
	return (1);
}
