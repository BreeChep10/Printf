#include "main.h"

char *to_binary(char *array, int num, int size)
{
        int sign = 0, i;
        
	if (num < 0)
		sign = 1, num *= -1, num -= 1;
        
	for (i = 0; i < size; i++)
		array[i] = '0';
	array[size] = '\0';
	for (i = size - 1; num > 0; i--)
		array[i] = (num % 2) + '0', num /= 2;
	if (num != 0)
		array[i] = '1';
	for (i = 0; array[i] != '\0'; i++)
		if (sign)
			array[i] = ((array[i] == '1') ? '0' : '1');
        
        return (array);
}
