/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:18:48 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/07 12:58:11 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	char	*dst;

	dst = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dst);
}

int main ()
{
	char	src[] = "Hello World!";
	char	dest[3];
	char *result = ft_strcpy(dest, src);

/* 	printf("the string on source is: %s\n", src);
	ft_strcpy(dest, src); */
	printf("%s\n", result);
}

