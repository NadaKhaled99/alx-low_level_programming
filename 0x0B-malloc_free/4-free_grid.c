#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_grid-unction that frees a 2 dimensional grid previously
*created by your alloc_grid function
*@grid:2d grid
*@height:element
*Return: return nothing-void
 */
void free_grid(int **grid, int height)
{
int m;
for (m = 0; m < height; m++)
{
free(grid[m]);
}
free(grid);
}
