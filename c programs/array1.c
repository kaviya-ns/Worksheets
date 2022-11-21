#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
   int x[10],i,random=rand(),array;
   for (i=0;i<10;i++)
   {
      x[i]=rand();
   }
   for(i=0;i<10;i=i+2)
   {
      printf("%d",x[i]);
   }
   printf("\n");
   for (i=0;i<10;i++)
   {
      if (x[i]%2==0)
      {
         printf("%d",x[i]);
      }
      else
      {
         continue;
      }
   }
   printf("\n");
   for (i=0;i<5;i++)
   {
      array=x[i];
      x[i]=x[10-i-1];
      x[10-i-1]=array;
   }
   printf("\n");
   for (i=0;i<10;i++)
   {
      printf("%d",x[i]);
   }
   printf("\n");
     for (i=0;i<5;i++)
   {
      array=x[i];
      x[i]=x[10-i-1];
      x[10-i-1]=array;
   }
   printf("\n");
   for (i=0;i<10;i++)
   {
      printf("%d",x[i]);
   }
   printf("\n");
   printf("%d" "%d",x[9],x[0]);
}
