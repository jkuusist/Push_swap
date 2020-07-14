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

	ft_printf("arg is: %s\n", arg);

	i = 0;
	while (arg[i])
	{
		if (!(ft_isdigit(arg[i])))
			return (0);
		i++;
	}
	temp = ft_atoi(arg);

	ft_printf("temp is %lld\n", temp);
//	ft_printf("INT_MAX IS %ld\nINT_MIN IS %ld\n", INT_MAX, INT_MIN);

	if ((temp > INT_MAX) || (temp < INT_MIN))
		return (0);
	return (1);
}
