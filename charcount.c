#include <stdio.h>
int main()
{
   long nc;
   
   nc = 0;
   while (getchar() != EOF)
   	  ++nc; /* increment count by 1 (++) = nc = nc + 1, -- decrement by 1 */
   printf("%ld\n", nc); /* %d - type int; %ld - long int */
}
   /* ctrl + d to end program and count final */
