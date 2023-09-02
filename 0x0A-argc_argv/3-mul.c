#include "main.h"
#include <stdlib.h>
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
int n1;
int n2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
Result = n1 *n2;
printf("%d\n", Result);
return (0);
}
