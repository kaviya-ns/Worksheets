#include<stdio.h>
#include<math.h>
int main()
{
   float interest_rate,time,principal,amount,interest,x,y;
   printf("enter the interest rate");
   scanf("%f",&interest_rate);
   printf("enter the number of times the interest is compounded during a year");
   scanf("%f",&time);
   printf("enter the balance in the savings account");
   scanf("%f",&principal);
   x=(1+(interest_rate/(time*100)));
   y=pow(x,time);
   amount=principal*y;
   interest=principal-amount;
   printf("interest rate :%.2f\n",interest_rate);
   printf("times compounded :%.2f\n",time);
   printf("principal  :%.2f\n",principal);
   printf("interest  :%.2f\n",interest);
   printf("amount in savings  :%f",amount);
}
   
   
