#include "main.h"

void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - Code printf program
 * @format: format of the print
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
	int i, printed = 0,
	    printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0;
}
