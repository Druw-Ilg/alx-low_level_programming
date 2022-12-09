#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
int num = 0;
do {
printf("%d", num);
if (num == 9)
{
printf("\n");
num++;
}
} while (num <= 9);
return (0);
}
