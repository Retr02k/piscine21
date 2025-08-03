/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:16:09 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/02 19:41:17 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_cell(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('A');
	else if (i == 0 && j == (x - 1))
		ft_putchar('A');
	else if (j == 0 && i == (y - 1))
		ft_putchar('C');
	else if (j == (x - 1) && i == (y - 1))
		ft_putchar('C');
	else if (j == 0)
		ft_putchar('B');
	else if (i == 0)
		ft_putchar('B');
	else if (i == (y - 1))
		ft_putchar('B');
	else if (j == (x - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		write(2, "please insert valid inputs!", 27);
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_cell(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
