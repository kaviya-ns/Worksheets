#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
int main()
{
   double x,y,z;
   x=rand();
   y=rand();
   printf("%lf \n",x);
   printf("+%lf \n",y);
   printf("--------- \n");
   z=x+y;
   sleep(10);
   printf("%lf",z);

}