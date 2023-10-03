#include "main.h"
/**
*create_file-Create a function that creates a file
*@text_content: is a NULL terminated string to write to the file
*@filename:is the name of the file to create
*Return:1 on success, -1 on failure (file can not be created
*file can not be written, write “fails”
*/
int create_file(const char *filename, char *text_content)
{
int forward;
int wwrite;
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
forward = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wwrite = write(forward, text_content, length);
if (forward == -1 || wwrite == -1)
{
return (-1);
}
close(forward);
return (1);
}
