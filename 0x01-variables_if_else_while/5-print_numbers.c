#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
num++;
printf("%d", num);
if (num == 9)
printf("\n");
}
return (0);
}
