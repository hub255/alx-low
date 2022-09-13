#include <stdio.h>
#include <unistd.h>
/**
*main - prints only putchar
*
*Description: Refers to main
*Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
