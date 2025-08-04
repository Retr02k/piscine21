/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:07:07 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/04 20:51:07 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str >= 48) && (*str <= 57))
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char str[] = "456789a";
	printf("%i\n", ft_str_is_numeric(str));
}
*/
