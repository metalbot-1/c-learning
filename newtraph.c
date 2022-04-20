#include <stdio.h>
#include <math.h>

float f(float);
float derivative(float);

int main()
{
 float x;
 unsigned short i = 1, n;

 printf("First Approx: ");
 scanf("%f", &x);

 printf("Iterations: ");
 scanf("%hu", &n);

 while (i <= n)
 {
  x = x - f(x) / derivative(x);
  i++;
 }
  printf("Approx Root: %f \n", x);
  return 0;
}

float f(float x)
{
 return pow(x, 2) - 5;
}

float derivative(float x)
{
 return 2*x;
}
