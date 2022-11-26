#include<stdio.h>
void main()
{
   int i,size,x;
   printf("enter the size of the array");
   scanf("%d",&size);
   int array[size];
   printf("enter the numbers");
   for (i=0;i<size;i++)
   {
      scanf("%d",&array[i]);
   }
   printf("\n");
   for (i=0;i<size/2;i++)
   {
      x=array[i];
      array[i]=array[size-i-1];
      array[size-i-1]=x;
   }
   printf("\n");
   for (i=0;i<size;i++)
   {
      printf("%d",array[i]);
   }
}

