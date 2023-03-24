#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    
    for(i = 0; i < 10; i++)
    {
        putchar(i + '0');
        if(i != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    
    return 0;
}
