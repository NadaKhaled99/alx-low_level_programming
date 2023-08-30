#include "main.h"
#include "putchar.h"
/**
*_sqrt_recursion- function returns the natural sqrt root of a number
*@n: integer
*Return: always 0 (success)
*/
int _sqrt_recursion(int n)
{
 int start = 1;
 int end = n;
 int r = -1;
if (n == 0 || n == 1)
{
return (n);
}
while (start <= end)
{
int mid = (start +  end) / 2;
if (mid * mid == n)
{
return (mid);
}
if (mid * mid < n)
{
start = mid + 1;
r = mid;
}
else
{
end = mid - 1;
}
}
return (r);
}
