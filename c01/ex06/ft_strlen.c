/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:30:30 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/01 12:39:54 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
/*
int main ()
{
printf("the number of chars is: %i!\n", ft_strlen("ola"));
printf("the number of chars is: %i!\n", ft_strlen("adeus"));
printf("the number of chars is: %i!\n", ft_strlen("Hello World!"));
printf("the number of chars is: %i!\n", ft_strlen("dattebayo Sasuke!"));
}
*/
