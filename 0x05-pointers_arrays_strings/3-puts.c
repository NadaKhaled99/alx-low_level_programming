#include "main.h"
/**
*@str:string to print
*_puts-print string
*Return:nothing
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
