/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:13:04 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/12 17:03:47 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*whitespace(char	*str)
{
	while ((*str) && ((*str == 32) || (*str >= 7 && *str <= 13)))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	str = whitespace(str);
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str && *str >= 48 && *str <= 57)
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	result *= sign;
	return (result);
}
/*
int main()
{
	char str[] = "   ---+--+1234ab567";

	printf("%i\n", ft_atoi(str));
}
*/
