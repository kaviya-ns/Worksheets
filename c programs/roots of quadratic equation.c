#include <stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d,x,y,z;
   printf("enter the coefficient of x^2");
   scanf("%f",&a);
   printf("enter the coefficient of x");
   scanf("%f",&b);
   printf("enter the value of c");
   scanf("%f",&c);
   d=b*b-4*a*c;
   z=pow(d,0.5);
   x=(-b+d)/(2*a*c);
   y=(-b-d)/(2*a*c);
   printf("the two solutions of the equation is=%.2f and %.2f",x,y);
}