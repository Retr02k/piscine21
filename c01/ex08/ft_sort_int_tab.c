/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:00:33 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/05 14:12:11 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
/*
int main ()
{
	int num[] = {1, 3, 2, 4, 7, 6, 5, 8, 9};
	int i = 0;
	int size = 9;


	printf("original array order:");
	while (i < size)
	{
		printf("%d", num[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(num, size);

	printf("rearranged array:");
	i = 0;
	while (i < size)
	{
		printf("%d", num[i]);
		i++;
	}
	printf("\n");
}
*/
