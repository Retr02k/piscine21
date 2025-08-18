/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:25:56 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 21:00:32 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	counter	=	0;
	while (str[counter])
		counter++;
	return (counter);
}

void	ft_swap(char	*a, char	*b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int	i = ft_strlen(str) - 1;
	int	j = 0;
	while (j < i)
	{
		ft_swap(&str[i], &str[j]);
		j++;
		i--;
	}
	return (str);
}

int	main()
{
	char	str[] = "olay";
	printf("%s\n", ft_strrev(str));
}
