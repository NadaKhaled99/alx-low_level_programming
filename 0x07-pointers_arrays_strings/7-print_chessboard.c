#include "main.h"
#include "putchar.h"
/**
*print_chessboard-prints the chessboard
*@a:ptr to print
Return:a return type of void.
*/
void print_chessboard(char (*a)[8])
{
int l;
int m;
for (l = 0; l < 8; l++)
{
for (m = 0; m < 8; m++)
{
_putchar(a[l][m]);
}
_putchar('\n');
}
}
