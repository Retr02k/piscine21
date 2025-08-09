/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:36:24 by retr0             #+#    #+#             */
/*   Updated: 2025/08/09 14:21:28 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*orig_str;
	char	*orig_tofind;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		orig_str = str;
		orig_tofind = to_find;
		while ((*orig_str) && (*orig_tofind) && (*orig_str == *orig_tofind))
		{
			orig_str++;
			orig_tofind++;
		}
		if(*orig_tofind == '\0')
			return(str);
		str++;
	}
	return (0);
}
/*
int main ()
{
	char s1[] = "Hello World!";
	char s2[] = "rl";

	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
}
*/
