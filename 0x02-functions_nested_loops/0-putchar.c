#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
char ch[] = "_putchar\n";
int i, len = sizeof(ch) / sizeof(ch[0]);
for (i = 0 ; i < len ; i++)
putchar(ch[i]);
return (0);
}
