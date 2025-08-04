/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:58:03 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/01 12:29:25 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
		return ;
	}
}
/*
int main ()
{
	ft_putstr("ola");
}
*/
