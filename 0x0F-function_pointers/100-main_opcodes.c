#include <stdlib.h>
#include <stdio.h>
/**
*main - prints the opcodes of its own main function
*@argc: number of arguments
*@argv: array of arguments
*Description:program prints opcodes
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int b;
int i;
char *a;
if (argc != 2)
{
printf("Error\n");
return (1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < b; i++)
{
printf("%02hhx", *((char *)main + i));
if (i < b - 1)
{
printf(" ");
}
else
printf("\n");
}
return (0);
}
