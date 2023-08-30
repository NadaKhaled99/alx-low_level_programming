#include "main.h"
#include "putchar.h"
int real_prime(int a, int b);
/**
*is_prime_number-this integer is prime or not
*@n:number
*Return: 1 if prime number or 0 if not
*/
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (real_prime(n, 2));
}
/**
*real_prime-function that calculate if number is prime
*@a:number integer to know if prime or not
*@b:number for checking
*Return:1 if n is prime or 0 if not prime
*/
int real_prime(int a, int b)
{
if (a == b)
{
return (1);
}
if (!(a % b))
{
return (0);
}
return (real_prime(a, b + 1));
}
