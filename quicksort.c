/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 10:46:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/27 11:13:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		partition(int *arr, int start, int end)
{
	int pivot;
	int i;
	int j;

	pivot = arr[end];
	i = start - 1;
	j = start;
	while (j <= (end -1))
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&(arr[i]), &(arr[j]));
		}
		j++;
	}
	swap(&(arr[i + 1]), &(arr[end]));
	return (i + 1);
}

void	quicksort(int *arr, int start, int end)
{
	int pivot;

	if (start < end)
	{
		pivot =	partition(arr, start, end);
		quicksort(arr, start, (pivot - 1));
		quicksort(arr, (pivot + 1), end);
	}
}
