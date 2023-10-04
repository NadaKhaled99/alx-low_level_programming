#include "main.h"
/**
*append_text_to_file-Appends text at the end of a file.
*@filename:A pointer to the name of the file.
*@text_content:The string to add to the end of the file.
*Return:
*/
int append_text_to_file(const char *filename, char *text_content)
{
int wwrite;
int oppen;
int length = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (length = 0; text_content[length];)
{
length++;
}
}
oppen = open(filename, O_WRONLY | O_APPEND);
wwrite = write(oppen, text_content, length);
if (oppen == -1 || wwrite == -1)
{
return (-1);
}
close(oppen);
return (1);
}
