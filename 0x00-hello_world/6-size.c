#include <stdio.h>
/**
*main->entry point
*Return: Always 0 (Success)
*/
int main(void)
{
char Char;
int Int;
long int LongInt;
long long int LongLongInt;
float Float;
	printf("Size of a char: %lu byte(s)", sizeof(Char));
	printf("Size of an int: %lu byte(s)", sizeof(Int));
	printf("Size of a long int: %lu byte(s)", sizeof(LongInt));
	printf("Size of a long long int: %lu byte(s)", sizeof(LongLongInt));
	printf("Size of a float: %lu byte(s)", sizeof(Float));
	return (0);
}
