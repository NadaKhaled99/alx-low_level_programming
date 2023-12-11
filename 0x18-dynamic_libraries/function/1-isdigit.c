#include "main.h"
/**
*_isdigit-function that check if a  character is a digit or not
*@c:character
*Return: returns 1 if it is uppercase , 0 if not uppercase
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
