#include <stdio.h>
/* print fahrenheit-celsius table
   for fahr = 0, 20, ....., 300; lfoating-point version */
int main()
{
  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0; 
  upper = 300;
  step = 20;
  
  fahr = lower;
  while (fahr <= upper);
  {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("fahr\t celsius");
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
