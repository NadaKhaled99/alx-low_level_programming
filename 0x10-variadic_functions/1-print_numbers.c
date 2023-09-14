#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers-prints numbers, followed by a new line
*@separator:is the string to be printed between numbers
*@n:is the number of integers passed to the function
*@...:A variable number of numbers need to print it
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int m;
va_list b;
va_start(b, n);
for (m = 0; m < n; m++)
{
printf("%d", va_arg(b, int));
if (m != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(b);
}
