#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
unsigned long long fact1 = 1;
unsigned long long fact2 = 1;
unsigned long long fact3 = 1;

int n,r,a,b,c,d,i,p,x;
char t,P,C;

printf("Enter permutation (P) or combination (C)\n");
scanf("%s", &t);
printf("Enter a number n: \n");
scanf("%d", &n);
printf("Enter a number r: \n");
scanf("%d", &r);

if (t = P, n >= r)
{
for (a = 1; a <= n; ++a)
{
fact1*=a;
}
for (b = 1; b <= (n-r); ++b)
{
fact2*=b;
}
p = fact1/fact2;
printf("The answer is %d\n", p);
}

else if (t = C, n >= r)
{
for (c = 1; c <= n; ++c)
{
fact1*=c;
}
for (d = 1; d <= (n-r); ++d)
{
fact2*=d;
}
for (i = 1; i <= r; ++i)
{
fact3*=i;
}
p = fact1 / fact2;
x = p / fact3;
printf("The answer is %d\n", x);
}
return 0;
} 
