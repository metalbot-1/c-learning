#include <stdio.h>
int main()
{
   int c, nl; /* nl gives line count */
   
   nl = 0;
   while ((c = getchar()) != EOF)
       if (c == '\n')
          ++nl;
   printf("%d\n", nl);
}
