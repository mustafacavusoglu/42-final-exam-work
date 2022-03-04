
int		ft_atoi(const char *str)
{
	int i;
	int sign;
	long int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
	    i++;
    }
	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+' || str[i] == '-')
    {
        i++;
    }
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("%d\n%d", ft_atoi("  -2147483648"),atoi("  -2147483648"));
    return 0;
}
