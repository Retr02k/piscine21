/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:49 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 17:38:19 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int main()
{
	int	x = 2;
	int	y = 4;

	printf("original integer: %i%i\n", x, y);
	ft_swap(&x, &y);
	printf("swapped integers: %i%i\n", x, y);
}
