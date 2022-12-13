#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int len = sizeof(quote) / sizeof(quote[0]);
int i;
for (i = 0 ; i < len ; i++)
putchar(quote[i]);
putchar('\n');
return (0);
}
