#include "main.h"
/**
*_islower-function check if character is lowercase
*@c:character need to check
*Return:1 if character is lowercase or 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
