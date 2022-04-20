#include <stdio.h>
int main()
{
 int x;
 int *p;
 p = &x;
 x = 107;
printf("value of x: %d\n", *p);
}
