#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
float x;
int a, b, n;
unsigned long long fact = 1;
printf("Enter a value for x: \n");
scanf("%f \n", &x);
for (n = 0; n <= 10; ++n)
{
fact*= a;
b = pow(x,n) / fact;
}
return 0;
}
