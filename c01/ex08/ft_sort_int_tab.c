/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:00:33 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/03 00:51:12 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (tab[i] < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
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
