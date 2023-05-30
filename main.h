#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 */

typedef struct specifiers {
	char *data;
	int (*f)(va_list, char *, unsigned int);
} spec_t;

int print_reverse(va_list args, char *buffer, unsigned int buffer_size);
int print_memory_address(va_list args, char *buffer, unsigned int buffer_size);
int print_rot13(va_list all_args, char *buffer, unsigned int buffer_size);
int binary_conversion(va_list all_args, char *buffer, unsigned int buffer_size);
int print_upper_hex(va_list all_args, char *buffer, unsigned int buffer_size);
int print_lower_hex(va_list all_args, char *buffer, unsigned int buffer_size);
/*int print_uoctal(va_list all_args, char *buffer, unsigned int buffer_size);*/
int print_uint(va_list all_args, char *buffer, unsigned int buffer_size);
int percent_print(va_list all_args, char *buffer, unsigned int buffer_size);
int str_print(va_list all_args, char *buffer, unsigned int buffer_size);
int print_char(va_list all_args, char *buffer, unsigned int buffer_size);
int (*getfunc(const char *format, int index))(va_list, char *, unsigned int);
int print_integer(va_list all_args, char *buffer,unsigned int buffer_size);
int _printf(const char *format, ...);
int print_buffer(char *buffer, unsigned int buffer_size);
unsigned int add_buff(char *buffer, char content, unsigned int buffer_size);

#endif
