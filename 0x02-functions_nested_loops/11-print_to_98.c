#include "main.h"
#include "6-abs.c"
#include <stdio.h>
void print_to_98(int j) 
{
int i;
if (j > 98)
{      
for (i = j; i >= 98; i--)	
{  
printf("%d", i);	  
if (i != 98)	    
{      
printf(", ");	      
}  
}     
}
else   
{      
for (i = j; i <= 98; i++)
{	  
printf("%d", i);	  
if (i != 98)	    
{	      
printf(", ");	      
}	  
}      
}  
 printf("\n"); 
}

