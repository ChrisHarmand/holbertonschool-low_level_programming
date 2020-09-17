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
int x = 'a';
while (x <= 'z')
{
x = tolower(x);
putchar(x++);
putchar('\n');
}
return (0);
}
