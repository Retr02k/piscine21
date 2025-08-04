/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:17:22 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/04 20:49:54 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if ((*str >= 97) && (*str <= 122))
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char str[] = "\0";
	printf("%i\n", ft_str_is_lowercase(str));
}
*/
