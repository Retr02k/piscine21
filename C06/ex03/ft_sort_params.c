/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:15:41 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 14:46:39 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (ft_strlen(str + 1) + 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_param(char **str, int size)
{
	char	*temp;
	int		i;
	int		sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = 1;
		i = argc - 1;
		ft_sort_param(&argv[j], i);
		while (j <= i)
		{
			write(1, argv[j], ft_strlen(argv[j]));
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
