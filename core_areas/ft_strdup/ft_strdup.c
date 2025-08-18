/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 23:32:32 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/17 23:52:41 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(const char *s1)
{
	int		tomar_no_cu = ft_strlen(s1);
	char	*dest;
	int		i = 0;

	dest = malloc(tomar_no_cu + 1);
	if (!dest)
		return(NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
