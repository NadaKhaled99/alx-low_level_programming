#include "main.h"
/**
*alloc_grid-function that returns a pointer to a 2D array of integers
*@width:element
*@height:element
*Return: return NULL If width or height is 0 or negative,
*/
int **alloc_grid(int width, int height)
{
int **TWD;
int hheight;
int wwidth;
if (height <= 0 || width <= 0)
{
return (NULL);
}
TWD = malloc(sizeof(int *) * height);
if (TWD == NULL)
{
return (NULL);
}
for (hheight = 0; hheight < height; hheight++)
{
TWD[hheight] = malloc(sizeof(int) * width);
if (TWD[hheight] == NULL)
{
for (hheight = 0; hheight >= 0; hheight--)
{
free(TWD[hheight]);
}
free(TWD);
return (NULL);
}
}
for (hheight = 0; hheight < height; hheight++)
{
for (wwidth = 0; wwidth < width; wwidth++)
{
TWD[hheight][wwidth] = 0;
}
}
return (TWD);
}
