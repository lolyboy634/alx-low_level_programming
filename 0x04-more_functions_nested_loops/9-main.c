#include <stdio.h>

/**
 * fizzBuzz - function to print FizzBuzz sequence
 * @num: the number to check
 */
void fizzBuzz(int num)
{
    if ((num % 3 == 0) && (num % 5 == 0))
    {
        printf("FizzBuzz ");
    }
    else if (num % 3 == 0)
    {
        printf("Fizz ");
    }
    else if (num % 5 == 0)
    {
        printf("Buzz ");
    }
    else
    {
        printf("%d ", num);
    }
}

int main(void)
{
    int i;

    printf("FizzBuzz sequence for numbers from 1 to 20:\n");
    for (i = 1; i <= 20; i++)
    {
        fizzBuzz(i);
    }

    printf("\n");

    return 0;
}

