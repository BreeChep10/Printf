#include "main.h"

int print_plus(va_list all_args, char *buffer, unsigned int buffer_size)
{
        int num = va_arg(all_args, int), i, div = 1, copy, count = 0;

        if (num == 0)
        {
                buffer_size = add_buff(buffer, '0', buffer_size);
                return (1);
        }
        else if (num < 0)
                buffer_size = add_buff(buffer, '-', buffer_size), num *= -1;
        else
                buffer_size = add_buff(buffer, '+', buffer_size);
        copy = num;
        while (copy > 9)
                copy /= 10, div *= 10;
        for (i = 0; div > 0; i++)
        {
                buffer_size = add_buff(buffer, ((num / div) % 10) + '0', buffer_size);
                div /= 10, count++;
        }

        return (count + 1);
}
                
