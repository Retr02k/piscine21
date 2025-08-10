/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:08:39 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/10 16:32:31 by psilva-p         ###   ########.fr       */
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
		while (*temp_ptr_str == *temp_ptr_tofind
			&& *temp_ptr_str && *temp_ptr_tofind)
		{
			temp_ptr_str++;
			temp_ptr_tofind++;
		}
		if (*temp_ptr_tofind == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "hello world";
	char s2[] = "world";

	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
	printf("%s\n", ft_strstr("hello world", "world"));
	printf("%s\n", ft_strstr("abcabcabcd", "abcd"));
	printf("%s\n", ft_strstr("abcabcabcd", "cd"));
	printf("%s\n", ft_strstr("abcdef", "gh"));
	printf("%s\n", strstr("abcdef", "gh"));
}
*/
