#include "main.h"
#include <string.h>
/**
*_strstr-function it's target to locates a substring
*@haystack:string
*@needle:do subtraction
*Return: ptr to string
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
{
return (haystack);
}
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return (0);
}
