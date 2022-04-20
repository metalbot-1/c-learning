#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
double x, val, result = 1;
int n, i = 1;
printf("Enter a value for x: ");
scanf("%lf", &x);
printf("Enter a value for n = ");
scanf("%d", &n);
printf("\n1");
double fact(int x)
{
double result = 1;
while (x > 0)
{
result *= x;
x--;
}
return (result);
}
while (i <= n)
{
printf("%s(%.0f^%d) / %d!", "+", x, i, i);
val = pow((double)x, (double)i) / fact (i);
result = result + val;
i = i + 1;
}
printf("\nResult = %lf \n", result);
return 0;
}
