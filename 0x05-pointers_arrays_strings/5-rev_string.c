#include "main.h"
/**
*rev_string-reverses string
*@s:string to being modified
*Return:nothing
*/
void rev_string(char *s)
{
int Len = 0;
int ind = 0;
char temp;
while (s[ind++])
Len++;
for (ind = Len - 1; ind >= Len / 2; ind--)
{
temp = s[ind];
s[ind] = s[Len - ind - 1];
s[Len - ind - 1] = temp;
}
}
