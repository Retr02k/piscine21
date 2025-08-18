/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:02:43 by psilva-p          #+#    #+#             */
/*   Updated: 2025/08/18 17:30:28 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int validate_base(char *str)
{
	int i;
	int j;
	int base_size;

	base_size = ft_strlen(str);
	if (base_size < 2)
		return (0);
	i = 0;
	while (i < base_size)
	{
		if (str[i] == '-' || str[i] == '+' || (*str == ' ') || (*str >= '\t' && *str <= '\r'))
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int index_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int atoi_engine(char *str, char *base, int base_size)
{
	int index;
	int result;

	result = 0;
	while (*str)
	{
		index = index_in_base(*str, base);
		if (index == -1)
			break;
		result = result * base_size + index;
		str++;
	}
	return (result);
}

int ft_atoi_base(char *str, char *base)
{
	int result;
	int sign;
	int base_size;

	sign = 1;
	result = 0;
	base_size = ft_strlen(base);
	if (!base_size || !validate_base(base))
		return (0);
	while ((*str) && ((*str == ' ') || (*str >= '\t' && *str <= '\r')))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = atoi_engine(str, base, base_size);
	return (result * sign);
}
/*
int main()
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num1 = ft_atoi_base("500", "0123456789");
	num2 = ft_atoi_base("111110100", "01");
	num3 = ft_atoi_base("1f4", "0123456789abcdef");
	num4 = ft_atoi_base("fiy", "poneyvif");

	printf("Result: %d\n", num1);
	printf("Result: %d\n", num2);
	printf("Result: %d\n", num3);
	printf("Result: %d\n", num4);
}
*/
