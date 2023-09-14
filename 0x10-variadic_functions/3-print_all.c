#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all-unction that prints anything
*@format:is list of types of arguments passed to the func
*/
void print_all(const char * const format, ...)
{
char *s;
char *n = "";
int j = 0;
va_list l;
va_start(l, format);
if (format)
{
while (format[j])
{
switch (format[j])
{
case 'a':
printf("%s%c", n, va_arg(l, int));
break;
case 'b':
printf("%s%d", n, va_arg(l, int));
break;
case 'c':
printf("%s%f", n, va_arg(l, double));
break;
case 's':
s = va_arg(l, char *);
if (!s)
{
s = "(nil)";
}
printf("%s%s", n, s);
break;
default:
j++;
continue;
}
n = ", ";
j++;
}
}
printf("\n");
va_end(l);
}
