/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:06:13 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/05 14:20:21 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*original_pointer;

	original_pointer = str;
	while (*str)
	{
		if ((*str >= 65) && (*str <= 90))
			*str += 32;
		str++;
	}
	return (original_pointer);
}
/*
int main()
{
	char str[] = "sdfghFGHJKbnm123";
	printf("%s\n", ft_strlowcase(str));
}
*/
