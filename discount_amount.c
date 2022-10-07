

#include <stdio.h>
int main()
{
    float ticket_cost,discount_percentage,number_of_tickets,amount_after_discount,discounted_amount,total_amount;
    ticket_cost=250;
    discount_percentage=0.2;
    printf("enter the number of tickets you bought");
    scanf("%f",&number_of_tickets);
    total_amount=ticket_cost*number_of_tickets;
    discounted_amount=number_of_tickets* ticket_cost*discount_percentage;
    amount_after_discount= total_amount- discounted_amount;
    if (number_of_tickets>15)
{
    printf("the total cost for your tickets is=%.3f",amount_after_discount);
}
    else
{
    printf("the total cost for your tickets is=%.3f",total_amount);
}
}
