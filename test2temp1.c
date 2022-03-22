#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ......, 300 */
   
int main()
{
  int fahr, celsius;
  int lower, upper, step;
  
  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit*/
  step = 20;   /*step size */
  
  fahr = lower;
  while (fahr <= upper) {
        celsius = 5* (fahr-32) / 9;
        printf("fahr\t, celsius\n");
        printf("%3d\t %5d\n", fahr, celsius); /* %3d %6d\n will adjust alignment */
        fahr = fahr + step;
        }
} 
