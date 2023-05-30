#include "main.h"

int print_codehex(va_list all_args, char *buffer, unsigned int buffer_size)
{
	char *str = va_arg(all_args, char *);
	int len = 0, i, j;
	char hex[2];

	if (!str)
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
	{
		unsigned char ascii = (unsigned char)str[i];

		if (str[i] >= 32 && str[i] < 127)
		{
			buffer_size = add_buff(buffer, str[i], buffer_size);
			len++;
		}
		else
		{
			buffer_size = add_buff(buffer, '\\', buffer_size), len++;
			buffer_size = add_buff(buffer, 'x', buffer_size), len++;
			hex[0] = (ascii >> 4) & 0xF;
			hex[1] = ascii & 0xF;

			for (j = 0; j < 2; j++)
			{
				if (hex[j] < 10)
					buffer_size = add_buff(buffer, hex[j] + '0', buffer_size);
				else
					buffer_size = add_buff(buffer, hex[j] - 10 + 'A', buffer_size);
				len++;
			}
		}
	}
	return (len);
}
