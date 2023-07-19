#!/bin/bash
#include <unistd.h>

/* Function to write a character to standard output */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/* Function to print "_putchar" followed by a new line */
void print_putchar()
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}

/* Main function to execute the program */
int main(void)
{
    print_putchar();
    return 0;
}



