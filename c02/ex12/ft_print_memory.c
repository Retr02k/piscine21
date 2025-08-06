/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:22:18 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/06 18:59:33 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(int nbr)
{
	char	*base = "0123456789abcdef";

	char	*hex_nbr;

	ft_putchar(nbr / 16);
	ft_putchar(nbr % 16);





}










void	hex_converter(unsigned int x, char *y, int n)
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


void	*ft_print_memory(void	*addr, unsigned int size)
{

}


int main ()
{
	char num;

	printf("%p\n", &num);


	return 0;
}
