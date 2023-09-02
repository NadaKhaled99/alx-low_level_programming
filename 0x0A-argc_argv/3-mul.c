#include "main.h"
#include <stdio.h>
/**
*main-multiplies two numbers.
*@argc:the number of arguments
*@argv:the array of arguments
*Return:Always 0 (success)
*/
int main(int argc, char *argv[])
{
int Result;
if (argc <  2)
{
printf("Error\n");
return (1);
}
Result = (int) *argv[1] * (int) *argv[2];
printf("%d\n", Result);
return (0);
}
