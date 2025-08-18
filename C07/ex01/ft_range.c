/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 21:15:32 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 22:15:52 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	elements;
	int	*i;

	if (min >= max)
		return (0);
	elements = max - min;
	i = malloc(elements * sizeof(int));
	if (i == NULL)
		return (0);
	int *orig_i = i;
	while (min < max)
	{
		*i = min;
		min++;
		i++;
	}
	return (orig_i);
}

int main()
{
	int	min;
	int	max;
	int	*arr;
	int	j;
	int	length;

	min = 3;
	max = 7;
	arr = ft_range(min, max);
	j = 0;
	length = max - min;
	while (j < length)
	{
		printf("%d", arr[j]);
		j++;
	}
	printf("\n");
	free(arr);
}
