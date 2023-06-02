#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifiers - Struct that handles specifiers switch.
 * @data: Pointer to the data passed.
 * @f: function pointer.
 */

typedef struct specifiers
{
	char *data;
	int (*f)(va_list, char *, unsigned int);
} spec_t;

int print_long_lohex(va_list all_args, char *buffer, unsigned int buffer_size);
int _print_int(va_list all_args, char *buffer, unsigned int buffer_size);
int _printf(const char *format, ...);
unsigned int add_buff(char *buffer, char content, unsigned int buffer_size);
int binary_conversion(va_list all_args, char *b, unsigned int buffer_size);
char *binary_to_hex(char *binary, char *hex_array, char check, int size);
char *binary_to_octal(char *binary, char *octal_array , int size);
int long_heX(va_list all_args, char *buffer, unsigned int buffer_size);
int longy_integer(va_list all_args, char *buffer, unsigned int buffer_size);
int louint(va_list all_args, char *buffer, unsigned int buffer_size);
int louoct(va_list all_args, char *buffer, unsigned int buffer_size);
int uoctal_print(va_list all_args, char *buffer, unsigned int buffer_size);
int percent_print(va_list all_args, char *buffer, unsigned int buffer_size);
int prct(va_list all_args __attribute__((unused)), char *b, unsigned int s);
int print_0Xhex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_0xhex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_buffer(char *buffer, unsigned int buffer_size);
int print_char(va_list all_args, char *buffer, unsigned int buffer_size);
int print_codehex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_hex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_integer(va_list all_args, char *buffer, unsigned int buffer_size);
int print_lower_hex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_memory_address(va_list args, char *buffer, unsigned int buffer_size);
int print_plus(va_list all_args, char *buffer, unsigned int buffer_size);
int print_plus_unsigned(va_list all_args, char *buffer, unsigned int buffer_size);
int print_plus_upper_hex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_reverse(va_list args, char *buffer, unsigned int buffer_size);
int print_rot13(va_list all_args, char *buffer, unsigned int buffer_size);
int print_space_int(va_list all_args, char *buffer, unsigned int buffer_size);
int print_str(va_list all_args, char *buffer, unsigned int buffer_size);
int print_octal(va_list all_args, char *buffer, unsigned int buffer_size);
int print_uint(va_list all_args, char *buffer, unsigned int buffer_size);
int print_upper_hex(va_list all_args, char *buffer, unsigned int buffer_size);
int short_hex(va_list all_args, char *buffer, unsigned int buffer_size);
int short_octal(va_list all_args, char *buffer, unsigned int buffer_size);
int short_uint(va_list all_args, char *buffer, unsigned int buffer_size);
int shorty_integer(va_list args, char *buffer, unsigned int buffer_size);
int skip(const char *format, int index);
int str_print(va_list all_args, char *buffer, unsigned int buffer_size);
char *to_binary(char *array, int num, int size);
int (*getfunc(const char *format, int index))(va_list, char *, unsigned int);


#endif
