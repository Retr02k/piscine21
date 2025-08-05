/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:21:34 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/05 17:52:06 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return(counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*orig_ptr;

	orig_ptr = dest;
	if (src == NULL)
		return(0);
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ft_strlen(orig_ptr));
}
/*
int main ()
{
	char	str[] = "";
	char	str2[30];
	int	size = 5;

	printf("%i\n", strlcpy(str2, str, size));
	printf("%i\n",ft_strlcpy(str2, str, size));
}
*/
