#include <stdio.h>

/**
 * main - Function Entry point
 * Return: 0 to show code executed Successfully
 */

int main(void)
{
int n = 0;

while (n < 10)
{
putchar(n + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');

return (0);
}
