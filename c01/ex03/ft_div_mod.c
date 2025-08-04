/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:03:13 by retr0             #+#    #+#             */
/*   Updated: 2025/08/03 00:55:24 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
	int	i = 1000;
	int	j = 2;
	int div;
	int mod;

	ft_div_mod(i, j, &div, &mod);
	printf("1st value = %i\n", i);
	printf("2nd value = %i\n", j);
	printf("div output = %i\n", div);
	printf("mod output = %i\n", mod);
}
*/
