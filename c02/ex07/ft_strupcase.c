/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:15:56 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/04 21:41:06 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*original_pointer;

	original_pointer = str;
	while (*str)
	{
		if ((*str >= 97) && (*str <= 122))
		{
			*str -= 32;
		}
		str++;
	}
	return (original_pointer);
}
/*
int main()
{
	char str[] = "sdfghFGHJKbnm123";
	printf("%s\n", ft_strupcase(str));
}
*/
