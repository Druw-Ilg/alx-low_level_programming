#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
int num;
int comma = ',';
int space = ' ';
int separator = comma + space;
for (num = '0' ; num <= '9' ; num++)
{
if (!(num == '9'))
{
putchar(num);
putchar(separator);
}
else
{
putchar(num);
putchar('\n');
}
}
return (0);
}
