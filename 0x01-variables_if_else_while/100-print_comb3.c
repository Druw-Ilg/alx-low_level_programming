#include <stdio.h>
/**
* main - give alaphabet
* Return: output the result
*/
/*
*Write a program that prints all possible different combinations of two digits.
*Numbers must be separated by , followed by a space
*The two digits must be different
*01 and 10 are considered the same combination of the two digits 0 and 1
*Print only the smallest combination of two digits
*Numbers should be printed in ascending order, with two digits
*You can only use the putchar function
*(every other function (printf, puts, etc…
*) is forbidden)
*You can only use putchar five times maximum in your code
*You are not allowed to use any variable of type char
*All your code should be in the main function
*julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu8
*9 100-print_comb3.c -o 100-print_comb3
*julien@ubuntu:~/0x01$ ./100-print_comb3
*01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17,
*18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37,
*38, 39, 45, 46, 47, 48,49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
*julien@ubuntu:~/0x01$
*/
int main(void)
{
int digit1, i = '9', x = '0', y = '1';
int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
for (i = '9' ; i >= '1' ; i--)
{
for (digit1 = '0' ; digit1 < i ; digit1++)
{
putchar(arr[x]);
}
x += '1';
y += '1';
if (i != '1')
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
