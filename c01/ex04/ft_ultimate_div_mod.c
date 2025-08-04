/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 00:01:30 by retr0             #+#    #+#             */
/*   Updated: 2025/08/01 00:16:08 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div_temp;
	int	mod_temp;

	div_temp = (*a / *b);
	mod_temp = (*a % *b);
	*a = div_temp;
	*b = mod_temp;
}
/*
int main ()
{
	int	i = 5;
	int	j = 2;

	ft_ultimate_div_mod(&i, &j);
	printf("div output: %i\n", i);
	printf("mod output: %i\n", j);
}
*/