#include "main.h"
/**
 * _puts - Print a string followed by a newline.
 * @str: The string to print.
 * This function prints each character of the given string until it reaches
 * the null terminator '\0'. After printing the string, it adds a newline
 * character to the output.
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
