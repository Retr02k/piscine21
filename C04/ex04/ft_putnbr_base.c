/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:03:56 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/12 18:49:50 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int	validate_base(char *str)
{
	int	i;
	int	j;
	int	base_size;

	base_size = ft_strlen(str);
	if (base_size < 2)
		return (0);
	i = 0;
	while (i < base_size)
	{
		if (str[i] == 43 || str[i] == 45)
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_rec_putnbr(long nbr, char *base)
{
	int		base_size;

	base_size = ft_strlen(base);
	if (nbr >= base_size)
		ft_rec_putnbr(nbr / base_size, base);
	ft_putchar(base[nbr % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	big_nbr;

	big_nbr = nbr;
	if (validate_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		big_nbr *= -1;
	}
	ft_rec_putnbr(big_nbr, base);
}
/*
int main ()
{
	ft_putnbr_base(500, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(500, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-500, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(500, "poneyvif");
	write(1, "\n", 1);
}
*/
