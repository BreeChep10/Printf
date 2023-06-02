#include "main.h"

char *binary_to_octal(char *binary, char *octal_array , int size)
{
	int i, j,  total = 0, set, index;

	for (i = 0; i < size; i++)
		octal_array[i] = '0';

	octal_array[size] = '\0';
        if (size == 22)
                i = 63;
        else
                i = 31;

	for (index = size - 1; i >= 0; index--, i--)
	{
                if (size == 11)
                {
                        if (i > 1)
                                set = 4;
                        else
                                set = 2;
                }
                if (size == 22)
                {
                        if (i > 0)
                                set = 4;
                        else
                                set = 1;
                }
		for  (j = 1, total = 0; j <= set; j *= 2, i--)
			total += (binary[i] - '0') * j;
		i++, octal_array[index] = total + '0';
	}
	return (octal_array);
}
