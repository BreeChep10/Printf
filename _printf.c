#include "main.h"

int _printf(const char *format, ...)
{
	va_list all_args;
	char *buffer;
	unsigned int i = 0, length = 0, buffer_index = 0;
	int (*func)(va_list, char *, unsigned int);

	va_start(all_args, format);
	buffer = malloc(sizeof(char) * 1024);

	if (!buffer || !format)
		return (-1);

	if (!*format)
		return (0);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			buffer_index = add_buff(buffer, format[i], buffer_index), length++;
		else if (!*(format + i + 1))
		{
			print_buffer(buffer, buffer_index);
			free(buffer);
			va_end(all_args);
			return (-1);
		}
		else
		{
			func = getfunc(format, i + 1);

			if (!func)
			{
				if (*(format + i + 1) == ' ' && !format[i + 2])
				{
					free(buffer);
					va_end(all_args);
					return (-1);
				}
				buffer_index = add_buff(buffer, format[i], buffer_index);
				length++;
			}
			else
			{
				i += skip(format, i + 1);
				length += func(all_args, buffer, buffer_index);
				
			}
		}

		buffer_index = length % 1024;
	}

	print_buffer(buffer, buffer_index);
	free(buffer);
	va_end(all_args);
	return length;
}
