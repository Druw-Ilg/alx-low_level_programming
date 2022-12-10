#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
int num;
for (num = '0' ; num <= '9' ; num++)
{
if (!(num == '9'))
{
putchar(num);
putchar(',');
putchar(' ');
}
}
return (0);
}
