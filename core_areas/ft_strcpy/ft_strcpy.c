/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:01:42 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/17 18:06:43 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*s1, char	*s2)
{
	char	*orig_pt_s1 = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (orig_pt_s1);
}

int main ()
{
	char s2[] = "ola";
	char s1[10];
	printf("%s\n", ft_strcpy(s1, s2));
}
