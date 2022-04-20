#include <stdio.h>
int max (int x, int y)
{
 if (x > y)
   return x;
 else
   return y;
}
int main()
{
 int a, b;
 printf("Input numbers for a, b\n");
 scanf("%d \t %d", &a, &b);
 int m = max(a,b);
 printf("m is  %d\n", m);
 return 0;
}
