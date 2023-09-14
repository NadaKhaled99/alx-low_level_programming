#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all-function that returns the sum of all its parameters
*@n:number of paramters
*@...:variable number of paramters used to get sum
*Return:0 if n == 0 - 0 or  sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list d;
unsigned int sum = 0;
unsigned int j;
va_start(d, n);
for (j = 0; j < n; j++)
{
sum += va_arg(d, int);
}
va_end(d);
return (sum);
}
