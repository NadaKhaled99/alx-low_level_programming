#include "main.h"
/**
*_atoi-function convert string to integer
*@s:string will be used
*Return:the integer that converted from string
*/
int _atoi(char *s)
{
int sum = 1;
int i = 0;
unsigned int r = 0;
while (!(s[i] <=  '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
{
sum *= -1;
}
i++;
}
while (s[i] <=  '9' && (s[i] >= '0' && s[i] != '\0'))
{
r = (r * 10) + (s[i] - '0');
i++;
}
r *= sum;
return (sum);
}
