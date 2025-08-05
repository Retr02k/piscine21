/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:17:19 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/05 14:39:09 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		else if((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
		else if (str[i - 1] == 32 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main ()
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(str));

}
