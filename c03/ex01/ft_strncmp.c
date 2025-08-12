/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:46:07 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/11 14:20:37 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*
int main ()
{
	char str1[] = "Hello ";
	char str2[] = "Hello World?";

	printf("%i\n", ft_strncmp(str1, str2, 11));
	printf("%i\n", strncmp(str1, str2, 11));
}
*/
