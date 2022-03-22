#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   for (a = 3; b < 100; a = a + 2)
   {
   b = ((a*a) - 1) / 2;
   c = b + 1;
   if (b < 100, c < 100)
   {
   printf("%d\t, %d\t, %d\n",a, b, c);
   }
   }
return 0;
}

