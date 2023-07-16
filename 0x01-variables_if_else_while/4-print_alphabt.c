#include <stdio.h>

/**
 * main - Function Entry point
 * Return: 0 to show code executed Successfully
 */

int main(void)
{
char c = 'a';
while (c <= 'z')
{
if ((c != 'e') & (c != 'q'))
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
