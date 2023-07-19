#include "main.h"

int main(void)
{
    char *str = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    return (0);
}

int _putchar(char c)
{
    return (write(1, &c, 1));
}

