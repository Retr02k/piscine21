/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:37:59 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/20 17:18:51 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;
	int	sep_size;

	i = 0;
	total = 0;
	sep_size = ft_strlen(sep);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * sep_size + 1;
	return (total);
}

int	copy_string(char *dest, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

int	copy_separator(char *dest, char *sep, int pos)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dest[pos] = sep[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		pos;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(calculate_total_length(size, strs, sep));
	if (!result)
		return (0);
	i = 0;
	pos = 0;
	while (i < size)
	{
		pos = copy_string(result, strs[i], pos);
		if (i != size - 1)
			pos = copy_separator(result, sep, pos);
		i++;
	}
	result[pos] = '\0';
	return (result);
}
/*
int main ()
{
	char	*strs[] = {"hello", "world", "42"};
	char	*sep = ", ";
	char	*result;

	result = ft_strjoin(3, strs, sep);
	if (result)
	{
		printf("joined strings: %s\n", result);
		free (result);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
}
*/
