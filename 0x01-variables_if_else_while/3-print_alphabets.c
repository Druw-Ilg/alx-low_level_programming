#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
int main(void)
{
char low_letter, caps_letter;
char ln = '\n';
for (low_letter = 'a' ; low_letter <= 'z' ; low_letter++)
{
putchar(low_letter);
if (low_letter == 'z')
{
for (caps_letter = 'A' ; caps_letter <= 'Z' ; caps_letter++)
{
putchar(caps_letter);
if (caps_letter == 'Z')
putchar(ln);
}
}
}
return (0);
}
