/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:15:06 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/02 23:09:21 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern const char g_rush00[8];
extern const char g_rush01[8];
extern const char g_rush02[8];
extern const char g_rush03[8];
extern const char g_rush04[8];
extern const char *g_active_pattern;

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result);
}

void	set_pattern(int version)
{
	if (version == 0)
		g_active_pattern = g_rush00;
	if (version == 1)
		g_active_pattern = g_rush01;
	if (version == 2)
		g_active_pattern = g_rush02;
	if (version == 3)
		g_active_pattern = g_rush03;
	if (version == 4)
		g_active_pattern = g_rush04;
}

int	main(int argc, char **argv)
{
	if(argc != 4)
	{
		write(2, "usage: ./rush <version> <x> <y>\n", 32);
		return (1);
	}
	set_pattern(ft_atoi(argv[1]));
	rush(ft_atoi(argv[2]), ft_atoi(argv[3]));
	return (0);
/*
	rush(0, 0);
	return (0);
*/
}
