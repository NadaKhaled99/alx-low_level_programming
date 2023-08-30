#include "main.h"
#include "putchar.h"
int try_palindrome(char *s, int i, int c);
int _strc_recursion(char *s);
/**
*is_palindrome-function returns 1 if a string is a palindrome and 0 if not
*@s:string
*Return: 1 if prime number or 0 if not
*/
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (try_palindrome(s, 0, _strc_recursion(s)));
}
/**
*_strc_recursion-function return lenght of string
*@s: string to know lenght 
*Return:lenght of string
*/
int _strc_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strc_recursion(s + 1));
}
/**
*try_palindrome-function check the character 
*@s:string
*@i:iteration
*@c:string length
*/
int try_palindrome(char *s, int i, int c)
{
if (*(s +i) != *(s + c - 1))
{
return (0);
}
if (i >= c)
{
return (1);
}
return (try_palindrome(s, 0, c - 1));
}
