/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:08:48 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/17 18:26:18 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	while (i < n && *s2)
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}

int main()
{
	char	str[] = "ola";
	char	dest[10];
	printf("%s\n", ft_strncpy(dest, str, 2));
}
