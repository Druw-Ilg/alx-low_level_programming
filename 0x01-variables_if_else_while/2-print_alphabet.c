#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
char letter;
char ln = '\n';
for (letter = 'a' ; letter <= 'z' ; ++letter)
{
putchar(letter);
}
putchar(ln);
return (0);
}
