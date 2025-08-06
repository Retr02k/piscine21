/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:26:47 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/06 21:45:07 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1) && (*s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int main()
{
	char str1[] = "Hello World!";
	char str2[] = "Hello World!";

	printf("%i\n", ft_strcmp(str1, str2));
	printf("%i\n", strcmp(str1, str2));
}
*/
