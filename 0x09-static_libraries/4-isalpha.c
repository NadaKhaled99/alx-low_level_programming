#include "main.h"
/**
*_isalpha-function checks if character is alphabetic or not
*@c:character for check
*Return:1 if character is lowercase or uppercase or letter
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
