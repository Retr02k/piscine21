/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:40:55 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/19 15:37:09 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	elements;
	int	*orig_ele;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	elements = max - min;
	*range = malloc((elements) * sizeof(int));
	if (*range == NULL)
		return (-1);
	orig_ele = *range;
	while (min < max)
	{
		*orig_ele = min;
		min++;
		orig_ele++;
	}
	return (elements);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	j;
	int	length;

	min = 3;
	max = 7;
	length = ft_ultimate_range(&arr, min, max);
	if (length == -1)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	j = 0;
	while (j < length)
	{
		printf("%i\n", arr[j]);
		j++;
	}
	free(arr);
	return (0);
}
*/
