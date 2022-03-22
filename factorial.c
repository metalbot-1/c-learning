#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 int n,i;
 unsigned long long fact = 1;
 printf("Enter an integer: ");
 scanf("%d", &n);

 if (n < 0)
    printf("No negative numbers allowed");
 else
 {
  for (i = 1; i <= n; ++i){
    fact *= i;
   }
 }
  printf("Factorial of %d = %llu\n", n, fact);

 return 0;
}

