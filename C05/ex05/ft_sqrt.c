/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:00:23 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 14:41:55 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	while (n * n <= nb)
	{
		if (nb == (n * n))
			return (n);
		n++;
	}
	if (nb < (n * n))
		return (0);
	return (0);
}
/*
int main()
{
	printf("%i\n", ft_sqrt(144));
}
*/
