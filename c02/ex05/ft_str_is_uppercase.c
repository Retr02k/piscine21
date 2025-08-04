/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:52:22 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/04 21:01:59 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if ((*str >= 65) && (*str <= 90))
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char str[] = "";
	printf("%i\n", ft_str_is_uppercase(str));
}
*/
