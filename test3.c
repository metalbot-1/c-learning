#include <stdio.h>
int main()
{
   int c;
   
   c = getchar();
   while (c != EOF) 
   {
        putchar (c);
        c = getchar(); /* input needs to be given to get output as it repeats whatever is 				written until the end of file */
   }
} 
   
