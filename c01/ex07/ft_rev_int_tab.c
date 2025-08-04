/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:53:55 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/01 21:58:02 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = (size - 1);
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int main ()
{
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	int size = 9;


	printf("original array order:");
	while (i < size)
	{
		printf("%d", num[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(num, size);

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
