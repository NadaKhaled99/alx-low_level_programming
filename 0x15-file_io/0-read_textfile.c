#include "main.h"
/**
*read_textfile-reads a text file and prints it to the POSIX standard output
*@letters:is the number of letters it should read and print
*@filename:the name of the text file
*Return:the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t wwrite;
ssize_t forward;
ssize_t type;
char *buffer;
forward = open(filename, O_RDONLY);
if (forward == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
type = read(forward, buffer, letters);
wwrite = write(STDOUT_FILENO, buffer, type);
free(buffer);
close(forward);
return (wwrite);
}
