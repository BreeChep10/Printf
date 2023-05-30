#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 **/
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

        _printf("short hex %hX\n", 334);
        printf("short hex %hX\n", 334);
        _printf("codehex: %S\n", "Best\nSchool");
	_printf("codehex: %S\n", "Best\tSchool");
	_printf("% d\n", 25);
	printf("% d\n", 25);
	_printf("0xhexadecimal: [%#X]\n", 12);
	printf("0xhexadecimal: [%#X]\n", -12);
	_printf("long int: [%li]\n", 100000);
	printf("long int: [%li]\n", 100000);
	_printf("long int: [%ld]\n", 100000);
	printf("long int: [%ld]\n", 100000);
	_printf("short int: [%hi]\n", 100000);
	printf("short int: [%hi]\n", 100000);
	_printf("short int: [%hd]\n", 100000);
	printf("short int: [%hd]\n", 100000);
	_printf("Binary:[%b]\n", 90);
	printf("Binary:[%b]\n", 90);
	_printf("Binary:[%b]\n", -7);
	printf("Binary:[%b]\n", -7);
	_printf("rot:[%R]\n", "Hello, world");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%#o]\n", ui);
	printf("Unsigned octal:[%#o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
/*	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
*/	_printf("Reverse: [%r]\n", "Hello, world!");
	return (0);
}
