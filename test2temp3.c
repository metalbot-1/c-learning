#include <stdio.h>
int main()
{
   int fahr;
   
   for (fahr = 0; fahr <= 300; fahr = fahr - 20) /* for reverse order change =, <= and fahr = 							    fahr +- step which changes the limits */
       printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

