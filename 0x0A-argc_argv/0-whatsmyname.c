#include <stdio.h>
#include "main.h"
/**
*main-prints its name, followed by a new line
*@argc:the number of arguments
*@argv:the array of arguments
*Return:Always 0 (success)
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", *argv);
}
return (0);
}
