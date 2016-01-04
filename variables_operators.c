#include <stdio.h>

int main () 
{
int a,b,c,d;
int p2, p1,p0;

printf("Enter a:" );
scanf("%d", &a);
printf("Enter b:");
scanf("%d", &b);
printf("Enter c:");
scanf("%d",&c);
printf("Enter d:");
scanf("%d", &d);

p2 = a*c;
p1 = a*d + b*c;
p0 = b*d;

printf("%dx^2 + %dx + %d\n",p2, p1, p0 );
return 0;
}