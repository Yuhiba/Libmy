#include "my.h"

int my_str_islower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return 0;
		i += 1;
	}
	return 1;
}
