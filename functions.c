#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   int x = abs(x);
   int y = abs(y);
   int a,b,f;
   printf("Enter value of x\n");
   scanf("%d", &x);
   printf("Enter value of y\n");
   scanf("%d", &y);
   
   
   if (abs(x) > abs(y))
   {
   a = x*x;
   b = y*y*y*y;
   f = a + b;   
   printf("%d \n", f);
   }
   if (abs(x) == abs(y))
   {
   a = x*x;
   b = (x*x + 1);
   f = a * b; 
   printf("%d \n", f);
   }   
   if (abs(x) < abs(y))
   {
   a = y*y;
   b = x*x*x*x;
   f = a + b;
   printf("%d \n", f); 
   }
return 0;
}
