#include <stdio.h>
int main()
{
int i;
int *pi;
i = 220;
printf("Address of i %d\n", i);
printf("Value of i %d\n", i);
pi = &i;
printf("Address of pointer pi: %d\n", &pi);
printf("Content of pointer pi: %d\n", *pi);
i = 1110;
printf("Address of pointer pi: %d\n", &pi);
printf("Content of pointer pi: %d\n", *pi);
}
