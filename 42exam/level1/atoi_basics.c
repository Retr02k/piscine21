#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char	*str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}

int main (void)
{
	char str[] = "123";
	char str2[] = "-123";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
}
