#include "main.h"
/**
*cap_string-capitalizes the words of string
*@st:ptr to string
*Return:ptr to string
*/
char *cap_string(char *st)
{
int stct = 0;
while (st[stct] != '\0')
{
if (st[0] >= 97 && st[0] <= 122)
{
st[0] = st[0] - 32;
}
if (st[stct] == ' ' || st[stct] || st[stct] == '\n' || st[stct] == '\t' || st[stct] == ';' || st[stct] == ',' || st[stct] == '.' || st[stct] == '!' || st[stct] == '?' || st[stct] == '"' || st[stct] == '(' || st[stct] == ')' || st[stct] == '{' || st[stct] == '}')
{
if (st[stct + 1] >= 97 && st[stct + 1] <= 122)
{
st[stct + 1] = st[stct + 1] - 32;
}
}
stct++;
}
return (st);
}
