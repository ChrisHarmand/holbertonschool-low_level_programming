#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the alphabet in lowercase using putchar only twice
 *
 * Return: 0
 */
int main(void)
{
int x = 'A';
while (x <= 'Z')
{
x = tolower(x);
putchar(x);
x++;
}
return (0);
}
