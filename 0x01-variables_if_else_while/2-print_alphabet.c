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
for(int x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
return 0;
}
