#include "main.h"
/**
*_puts-print string
*@s:stringtoprint
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
