#include <stdio.h>



/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
  
{
  
  char y;
  

  
  for (y = 'a'; y <= 'z'; y++)
    
    putchar(y);
  

  
  for (y = 'A'; y <= 'Z'; y++)
    
    putchar(y);
  

  
  putchar('\n');
  

  
  return (0);
  
}
