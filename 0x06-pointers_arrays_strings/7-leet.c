#include "main.h"
/**
*leet-function that encodes a string into 1337
*Letters a and A should be replaced by 4
*Letters e and E should be replaced by 3
*Letters o and O should be replaced by 0
*Letters t and T should be replaced by 7
*Letters l and L should be replaced by 1
*@st:ptr to string
*Return:ptr to string
*/
char *leet(char *st)
{
int sl = 0;
int lc = 0;
char ll[] = "aAeEoOtTlL";
char ln[] = "4433007711";
while (st[sl] != '\0')
{
lc = 0;
while (lc < 10)
{
if (ll[lc] == st[sl])
{
st[sl] = ln[lc];
}
lc++;
}
sl++;
}
return (st);
}
