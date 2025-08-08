/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:08:39 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/08 13:48:06 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_ptr_str;
	char	*temp_ptr_tofind;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		temp_ptr_str = str;
		temp_ptr_tofind = to_find;
		while (*str == *to_find && *str && *to_find)
		{
			str++;
			to_find++;
		}
		temp_ptr_tofind = to_find;
		if (*to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}

int main()
{
	char s1[] = "abcde";
	char s2[] = "cd";

	printf("%s\n", ft_strstr(s1, s2));
	//printf("%s\n", strstr(s1, s2));
}
