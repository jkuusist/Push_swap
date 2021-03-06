/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:31:01 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/30 13:42:46 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlong(long n)
{
	long i;

	if (n < 0)
	{
		i = -n;
		ft_putchar('-');
	}
	else
		i = n;
	if ((i / 10) > 0)
		ft_putlong(i / 10);
	ft_putchar((i % 10) + 48);
}
