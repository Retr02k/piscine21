/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:08:39 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/07 20:03:55 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_ptr_str;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find )
		{
			temp_ptr_str = str;
			while (*str == *to_find && *str && *to_find)
			{
				str++;
				to_find++;
			}
		}
		str++;
	}
	return (str);
}

int main()
{
	char s1[] = "ola mundubo";
	char s2[] = "ub";

	//printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
}
