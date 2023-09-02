#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main-prints the number of arguments passed into it.
*@argc:the number of arguments
*@argv:the array of arguments
*Return:Always 0 (success)
*/
int main(int argc, char *argv[])
{
int q, d, n, c, p, r1, r2, r3, f;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) < 0)
{
printf("0\n");
}
else
{
q = atoi(argv[1]) / 25;
r1 = atoi(argv[1]) % 25;
d = r1 / 10;
r2 = r1 % 10;
n = r2 / 5;
r3 = r2 % 5;
c = r3 / 2;
p = r3 % 2;
f = q + d + n + c + p;
printf("%d\n", f);
}
return (0);
}
