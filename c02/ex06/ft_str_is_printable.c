/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:02:50 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/04 21:12:49 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if(*str > 31)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char	str[] = "\t";
	printf("%i\n", ft_str_is_printable(str));
}
*/
