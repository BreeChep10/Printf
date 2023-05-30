#include "main.h"

/**
 * prct - Handles the conversion specifier "%".
 * @all_args: Unused va_list parameter.
 * @b: Pointer to the buffer where the "%" character will be stored.
 * @s: Size of the buffer.
 *
 * Return: The updated buffer size.
 */

int prct(va_list all_args __attribute__((unused)), char *b, unsigned int s)
{
	s = add_buff(b, '%', s);
	return (1);
}
