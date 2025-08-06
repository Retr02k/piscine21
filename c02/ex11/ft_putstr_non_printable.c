/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:58:47 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/06 17:34:47 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	hex_converter(unsigned int x, char *y)
{
	unsigned int	hex_0;
	unsigned int	hex_1;

	hex_0 = x / 16;
	hex_1 = x % 16;
	if (hex_0 < 10)
		y[0] = (hex_0 + 48);
	else
		y[0] = hex_0 + 87;
	if (hex_1 < 10)
		y[1] = (hex_1 + 48);
	else
		y[1] = hex_1 + 87;
}

void	ft_putstr_non_printable(char	*str)
{
	char	hex[2];

	if (str == NULL)
		return ;
	while (*str)
	{
		if ((*str < 32) || (*str == 127))
		{
			write(1, "\\", 1);
			hex_converter(*str, hex);
			write(1, hex, 2);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*
int main()
{
	char	str[] = "Hello \rWorld!";

	ft_putstr_non_printable(str);
	printf("%s\n", str);
}
*/
