#include "main.h"

int prct(va_list all_args __attribute__((unused)), char *b, unsigned int s)
{
	s = add_buff(b, '%', s);
	return (1);
}
