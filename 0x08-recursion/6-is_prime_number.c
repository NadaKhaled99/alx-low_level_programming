#include "main.h"
#include "putchar.h"
int real_prime(int n, int i);
/**
*is_prime_number-this integer is prime or not
*@n:number
*Return: 1 if prime number or 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (real_prime(n, n - 1));
}
/**
*real_prime-function that calculate if number is prime
*@n:number integer
*@i:iterator
*Return:1 if n is prime or 0 if not prime
*/
int real_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (real_prime(n, n - 1));
}
