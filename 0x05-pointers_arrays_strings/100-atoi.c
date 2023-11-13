/**
*_atoi-changes a string to an int
*@s:string to be changed
*Return:converted int
*/
int _atoi(char *s)
{
int j = 1;
unsigned int number = 0;
do {
if (*s == '-')
j *= -1;
else if (*s >= '0' && *s <= '9')
number = number * 10 + (*s - '0');
else if (number > 0)
break;
} while (*s++);
return (number *j);
}
