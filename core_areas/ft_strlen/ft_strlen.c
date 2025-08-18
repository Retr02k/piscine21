/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:15:32 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/17 15:28:10 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int main ()
{
	printf("%i\n", ft_strlen("ola mundo"));
}
