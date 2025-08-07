/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:07:36 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/07 13:56:05 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*orig_ptr;

	orig_ptr = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (orig_ptr);
}
/*
int main ()
{
	char	s1[30] = "ola";
	char	s2[] = "mundo";

	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s1, s2));
}
*/
