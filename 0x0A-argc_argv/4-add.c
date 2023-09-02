#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main-adds positive numbers
*@argc:the number of arguments
*@argv:the array of arguments
*Return:Always 0 (success)
*/
int main(int argc, char *argv[])
{
int n, d;
int s = 0;
for (n = 1; n < argc; n++)
{
for (d = 0; argv[n][d]; d++)
{
if (argv[n][d] < '0' || argv[n][d] > '9')
{
printf("Error\n");
return (1);
}
}
s = s + atoi(argv[n]);
}
printf("%d\n", s);
return (0);
}
