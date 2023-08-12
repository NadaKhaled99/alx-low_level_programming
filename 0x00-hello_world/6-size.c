#include <stdio.h>
/**
*main->entry point
*Return: Always 0 (Success)
*/
int main(void)
{
char Char;
int Int;
 int LongInt;
long long int LongLongInt;
float Float;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(Char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(Int));
printf("Size of a long int:%d byte(s)\n", (int)sizeof(LongInt));
printf("SizeOfALongLongInt:%lu byte(s)\n", (unsigned long)sizeof(LongLongInt));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(Float));
return (0);
}
