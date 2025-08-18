/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:50:11 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 14:42:05 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	num = 3;
	while (num * num <= nb)
	{
		if (nb % num == 0)
			return (0);
		num += 2;
	}
	return (1);
}
/*
int main ()
{
	printf("%i\n", ft_is_prime());
}
*/
