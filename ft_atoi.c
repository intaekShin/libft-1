#include "libft.h"
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int min;
	int result;
	i = 0;
	min = 1;
	result = 0;

	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		min = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}

	return(result *= min);
}
