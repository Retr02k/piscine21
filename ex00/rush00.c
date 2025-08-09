/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:30:45 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/09 16:31:16 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char	g_rush00[8] = {'o', 'o', 'o', 'o', '|', '-', '-', '|'};
const char	g_rush01[8] = {'/', '\\', '\\', '/', '*', '*', '*', '*'};
const char	g_rush02[8] = {'A', 'A', 'C', 'C', 'B', 'B', 'B', 'B'};
const char	g_rush03[8] = {'A', 'C', 'A', 'C', 'B', 'B', 'B', 'B'};
const char	g_rush04[8] = {'A', 'C', 'C', 'A', 'B', 'B', 'B', 'B'};
const char	*g_active_pattern = g_rush00;

void	ft_putchar(char c);

void	print_cell(int map[], const char c[])
{
	if (map[2] == 0 && map[3] == 0)
		ft_putchar(c[0]);
	else if (map[2] == 0 && map[3] == (map[0] - 1))
		ft_putchar(c[1]);
	else if (map[3] == 0 && map[2] == (map[1] - 1))
		ft_putchar(c[2]);
	else if (map[3] == (map[0] - 1) && map[2] == (map[1] - 1))
		ft_putchar(c[3]);
	else if (map[3] == 0)
		ft_putchar(c[4]);
	else if (map[2] == 0)
		ft_putchar(c[5]);
	else if (map[2] == (map[1] - 1))
		ft_putchar(c[6]);
	else if (map[3] == (map[0] - 1))
		ft_putchar(c[7]);
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	map[4];

	map[0] = x;
	map[1] = y;
	if (x <= 0 || y <= 0)
	{
		write(2, "please insert valid inputs!\n", 28);
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			map[2] = i;
			map[3] = j;
			print_cell(map, g_active_pattern);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
