/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:40:36 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/11 14:21:31 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*orig_ptr;

	i = 0;
	orig_ptr = dest;
	while (*dest)
		dest++;
	while (*src && (i < nb))
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	i++;
	*dest = '\0';
	return (orig_ptr);
}
/*
int main ()
{
	char	s1[30] = "ola ";
	char	s2[] = "mundo";

	printf("%s\n", ft_strncat(s1, s2, 3));
	printf("%s\n", strncat(s1, s2, 3));
}
*/
