#include<stdio.h>
/**
* main - Prints the alphabet from z to a
*
* Return: Always (Success)
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}	
putchar('\n');
return (0);
}
