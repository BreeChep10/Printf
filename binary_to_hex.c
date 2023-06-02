#include "main.h"


char *binary_to_hex(char *binary, char *hex_array, char check, int size)
{
        int i, j, total = 0, hex_add;
        
        if (check == 'u')
                hex_add = 55;
        else hex_add = 87;
        
        for (i = 0; i < size; i++)
                hex_array[i] = '0';
        
        hex_array[size] = '\0';
        
        for (i = (size * 4) - 1; i >= 0; i--)
        {
                for (j = 1, total = 0; j <= 8; j *= 2, i--)
                        total += (binary[i] - '0') * j;
                i++;
                if (total > 9)
                        hex_array[i / 4] = total + hex_add;
                else
                        hex_array[i / 4] = total + '0';
        }
        return (hex_array);
}
