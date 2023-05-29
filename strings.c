#include "main.h"

int str_print(va_list all_args, char *buffer, unsigned int buffer_size)
{
	char *str = va_arg(all_args, char *), *zero = "(null)";
	int i;
	
	if (!str)
	{
		for (i = 0; zero[i]; i++)
			buffer_size = add_buff(buffer, zero[i], buffer_size);
		return (6);
	}
	else
		for (i = 0; str[i]; i++)
			buffer_size = add_buff(buffer, str[i], buffer_size);
	return (i);
}
