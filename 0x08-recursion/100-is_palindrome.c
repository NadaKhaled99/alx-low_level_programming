#include <stdio.h>
int try_palindrome(char *str, int l, int c);
int _strc_recursion(char *s);
/**
*_strc_recursion-function return lenght of string
*@s: string to know lenght
*Return:lenght of string
*/

int _strc_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strc_recursion(s));
}
return (0);
}
/**
*try_palindrome-function check the character for checking
*@str:string
*@c:iteration/counter
*@l:string length
*Return: 1 if string is palindrome, 0 if not
*/
int try_palindrome(char *str, int l, int c)
{
if (c >=  l)
{
return (1);
}
if (str[l] == str[c])
{
return (try_palindrome(str, l - 1, c + 1));
}
return (0);
}
/**
*is_palindrome-function returns 1 if a string is a palindrome and 0 if not
*@s:string
*Return: 1 if prime number or 0 if not
*/
int is_palindrome(char *s)
{
int l = _strc_recursion(s);
int c = 0;
return (try_palindrome(s, l - 1, c));
}
