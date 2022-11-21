#include<stdio.h>
void main()
{
   int n,i,size;float array[100],sum=0;
   printf("enter the size of array");
   scanf("%d",&size);
   printf("enter the numbers in array");
   for (i=0;i<size;i++)
   {
      scanf("%f",&array[i]);
   }
   for (i=0;i<size;i++)
   {
      if (i%2==0)
      {
         array[i]=array[i]*1;
      }
      else
      {
         array[i]=array[i]*(-1);
      }
   }
   for (i=0;i<size;i++)
   {
      sum=sum+array[i];
   }
   printf("%f",sum);
}