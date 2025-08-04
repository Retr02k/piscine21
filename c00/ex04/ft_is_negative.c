/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:20:31 by psilva-p          #+#    #+#             */
/*   Updated: 2025/07/29 18:24:54 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int main ()
{
	ft_is_negative(456);
	write(1, "\n", 1);
	ft_is_negative(-3);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
}
*/
