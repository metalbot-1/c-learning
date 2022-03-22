#include <stdio.h>
int main()
{
  double nc; /* double - double precision float */
  
  for (nc = 0; getchar() != EOF; ++nc)
  ;
  printf("%.0f\n", nc);
}
