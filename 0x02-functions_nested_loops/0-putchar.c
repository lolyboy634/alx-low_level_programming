#include "main.h"

int main(void)
{
    char *message = "_putchar\n";

    for (int i = 0; message[i] != '\0'; i++)
    {
        _putchar(message[i]);
    }

    return (0);
}

int _putchar(char c)
{
    /* Replace '1' with the file descriptor of your choice (usually 1 for stdout) */
    return write(1, &c, 1);
}
