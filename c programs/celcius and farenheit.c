#include<stdio.h>
int main()
{
   float celcius,farenheit;
   printf("celcius|farenheit\n");
   printf("-------+---------\n");
   celcius=0;
   while (celcius<=100)
   {
   farenheit =((celcius*(9/5))+32);
   printf("%5f |  %5f\n",celcius,farenheit);
   celcius=celcius+10;
   }
}
